/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:10:46 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/07 03:29:59 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void evo()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j; // should not create a leak
	delete i;
}

int animal()
{
	evo();
	

	Animal *animals[4];
	
	//Animal animal;

	animals[0] = new Dog();
	animals[1] = new Dog("bone");

	animals[2] = new Cat();
	animals[3] = new Cat("fish");

	
	for (int i = 0; i < 4; i++)
	{
		cout << "ANIMAL: " << i << endl;
		cout << animals[i]->getType() << endl;
		animals[i]->printIdeas();
		cout << endl;
	}

	Dog dog1("dolu");
	Dog *dog2 = new Dog("bos");

	dog1.printIdeas();
	
	dog1 = *dog2;
	
	delete dog2;
	
	cout << endl;
	cout << endl;
	
	dog1.printIdeas();


	for (size_t i = 0; i < 4; i++)
	{
		delete animals[i];
	}

	return 0;
}

int main()
{
	animal();
	//system("leaks animal");
}