/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:53:21 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 16:06:55 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _learned_count(0)
{
	//cout << "MateriaSource constructor " << endl;
	for (int i = 0; i < MateriaSource::memory_limit; i++)
	{
		this->_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	//cout << "MateriaSource copy constructor " << endl;
	*this = other;
}

MateriaSource::~MateriaSource()
{
	//cout << "MateriaSource destructor " << endl;
	for (int i = 0; i < MateriaSource::memory_limit; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	//cout << "MateriaSource copy assigment " << endl;
	if (this != &rhs)
	{
		this->_learned_count = rhs._learned_count;

		for (int i = 0; i < MateriaSource::memory_limit; i++)
		{
			if (this->_materias[i] != NULL)
				delete this->_materias[i];
			if (rhs._materias[i] != NULL)
				this->_materias[i] = rhs._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_learned_count < MateriaSource::memory_limit)
	{
		this->_materias[this->_learned_count] = materia; //subject says dont clone it
		this->_learned_count++;
	}
}

AMateria *MateriaSource::createMateria(const string &type)
{
	for (int i = 0; i < MateriaSource::memory_limit; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	}
	
	return 0; //subject says
}