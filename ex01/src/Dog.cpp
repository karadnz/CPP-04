/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:34:31 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/07 03:28:42 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(string idea)
{
	cout << "Dog constructor called" << endl;
	this->_type = "Dog";
	this->_brain = new Brain(idea);
}

Dog::Dog()
{
	cout << "Dog constructor called" << endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src)
{
	cout << "Dog copy constructor" << endl;
    *this = src;
}

Dog::~Dog()
{
	cout << "Dog destructor called \n";
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	cout << "Dog copy assigment" << endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;

		Brain *newBrain = nullptr;
        if (rhs._brain)
        {
            newBrain = new Brain(*(rhs._brain));
        }
        delete this->_brain; 
        this->_brain = newBrain;
    }
    return *this;
}

void	Dog::makeSound() const
{
	cout << "woof woof" << endl;
}

string	Dog::getType() const
{
	return (this->_type);
}

void	Dog::printIdeas() const
{
	this->_brain->printIdeas();
}