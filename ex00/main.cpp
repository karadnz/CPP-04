/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:10:46 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/06 23:52:48 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void animal()
{
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	
	cout << dog->getType() << " " << endl;
	cout << cat->getType() << " " << endl;
	cout << meta->getType() << " " << endl;
	
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();


	delete meta;
	delete dog;
	delete cat;
	
}

void wrongAnimal()
{
	const WrongAnimal	*wrong_animal = new WrongAnimal();
	const WrongAnimal	*wrong_cat = new WrongCat();
	
	cout << wrong_animal->getType() << " " << endl;
	cout << wrong_cat->getType() << " " << endl;
	wrong_animal->makeSound();
	wrong_cat->makeSound();
	
	delete wrong_animal;
	delete wrong_cat;
	
}
int main()
{
	animal();
	cout << endl << endl << "WRONG" << endl << endl;
	wrongAnimal();
	
	return 0;
}