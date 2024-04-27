/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:27:09 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 19:16:30 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	//cout << "Character constructor for: " << this->_name << endl;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}

	this->init_backpack();
	
}

Character::Character(Character const &src) : _name(src._name)
{
	//cout << "Character copy constructor for: " << this->_name << endl;
	*this = src;
	
	this->init_backpack();
}

Character &Character::operator=(Character const &rhs)
{
	////cout << "Character copy assigment for: " << this->_name << endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		
		for (int i = 0; i < 4; i++)
		{	
			if (this->_inventory[i])
				delete this->_inventory[i]; //subject says we can and should delete on copy
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();	
		}

		this->empty_backpack();
		delete this->_backpack;
		
		this->init_backpack(rhs._backpack_cap, rhs._backpack_count); //we can acces priv members of other instances
		for (int i = 0; i < rhs._backpack_count; i++)
		{	
			this->_backpack[i] = rhs._backpack[i]->clone();
		}
			
	}
	return (*this);
}

Character::~Character()
{
	//cout << "Character destructor for: " << this->_name << endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	
	this->empty_backpack();
	delete this->_backpack;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++) //check if already in use
	{
		if (this->_inventory[i] == m)
			return;
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			//cout << "Character " << this->_name << " equipped with " << m->getType() << endl;
			return;
		}
	}
		
	//cout << "Character " << this->_name << " can't equip " << m->getType() << endl;
}

void Character::unequip(int idx) 
{
	if (idx > 3 || idx < 0 || !this->_inventory[idx])
	{
		//cout << "Character " << this->_name << " can't unequip" << endl;
		return;
	}

	//delete this->_inventory[idx]; //not allowed
	this->add_backpack(this->_inventory[idx]);
	this->_inventory[idx] = NULL;
	//std::cout << "Character " << this->_name << " unequipped" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0 || !this->_inventory[idx])
	{
		//cout << "Character " << this->_name << " can't use" << endl;
		return;
	}
	
	//cout << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << endl;
	this->_inventory[idx]->use(target);
}

string const &Character::getName() const
{
	return this->_name;
}

void Character::init_backpack(int backpack_cap, int backpack_count)
{
	this->_backpack_cap = backpack_cap;
	this->_backpack_count = backpack_count;
	
	this->_backpack = new AMateria *[this->_backpack_cap];

	for (int i = 0; i < this->_backpack_cap; i++)
	{
		this->_backpack[i] = NULL;
	}
	
}

void Character::add_backpack(AMateria *m)
{
	for (int i = 0; i < this->_backpack_cap; i++)
	{
		if (this->_backpack[i] == m)
			return;
	}
	
	if (_backpack_count < _backpack_cap)
	{
		this->_backpack[_backpack_count] = m;
		this->_backpack_count++;
	}
	else
	{
		grow_backpack();
		this->_backpack[_backpack_count] = m;
		this->_backpack_count++;
	}
		
}

void Character::grow_backpack()
{
	this->_backpack_cap += 10;

	AMateria	**new_backpack = new AMateria *[this->_backpack_cap];

	for (int i = 0; i < this->_backpack_cap; i++)
	{
		new_backpack[i] = NULL;
	}

	for (int i = 0; i < this->_backpack_count; i++)
	{
		new_backpack[i] = this->_backpack[i];
	}

	delete _backpack; 

	this->_backpack = new_backpack;
}

void Character::empty_backpack()
{
	for (int i = 0; i < this->_backpack_cap; i++)
	{
		if (this->_backpack[i])
			delete this->_backpack[i];
	}
	
}