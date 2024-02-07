/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:47:22 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/07 02:49:28 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(string idea)
{
	cout << "Cat constructor called" << endl;
	this->_type = "Cat";
	this->_brain = new Brain(idea);
}

Cat::Cat()
{
	cout << "Cat constructor called" << endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src)
{
    cout << "Cat copy constructor" << endl;
    *this = src;
}

Cat::~Cat()
{
	cout << "Cat destructor called \n";
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	cout << "Cat copy assigment" << endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;

		Brain *newBrain = nullptr;
        if (rhs._brain)
        {
            newBrain = new Brain(*(rhs._brain));
        }
        delete this->_brain; // Safely deallocate existing brain
        this->_brain = newBrain; // Assign the new brain
    }
    return *this;
}

void	Cat::makeSound() const
{
	cout << "meow meow" << endl;
}

string	Cat::getType() const
{
	return (this->_type);
}

void	Cat::printIdeas() const
{
	this->_brain->printIdeas();
}