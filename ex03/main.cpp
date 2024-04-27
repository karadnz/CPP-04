/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:10:46 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 19:15:50 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

//test1
void evo()
{
	MateriaSource *src = new MateriaSource();
	AMateria *tmp;
	src->learnMateria(new Ice()); //its callers responsibility to track the count since i cant change te func prototype
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	tmp = new Cure();
	src->learnMateria(tmp);
	delete tmp;


	ICharacter *me = new Character("me");

	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("asd");
	me->equip(tmp);
	delete tmp;

	me->unequip(0); //


	ICharacter *bob = new Character("bob");

	me->use(0, *bob); //wont work since we unequipped
	me->use(1, *bob); //heal
	me->use(2, *bob); //heal
	me->use(3, *bob); //heal
	
	me->use(4, *bob);
	me->use(5, *bob);
	me->use(-1, *bob);
	bob->use(0, *bob);
	
	delete src;
	delete me;
	delete bob;
}

//backpack test
void stress()
{
	MateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");
	
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	
	me->unequip(4);

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	//tmp = src->createMateria("cure"); 
	me->equip(tmp); //testing double free

	me->unequip(0);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	
	me->unequip(4);

	delete src;
	delete me;
	
	
}

//copy test
//empty test
void m() 
{
	MateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character *me = new Character("me");
	
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	tmp = src->createMateria("cure"); 
	me->equip(tmp);
	
	me->unequip(3); //

	tmp = src->createMateria("ice"); //
	me->equip(tmp);
	

	Character *bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(3, *bob); //should be ice
	
	me->unequip(0);
	me->unequip(7);
	me->unequip(-1);

	*bob = *me; //

	delete src;
	delete bob;
	delete me;
	

	
}
int subject()
{
	MateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter *me = new Character("me");
	
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	
	delete bob;
	delete me;
	delete src;

	return 0;
}

int main()
{
	subject();
	//evo();
	//m();
	//stress();
	//system("leaks game");
}