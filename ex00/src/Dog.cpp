/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:34:31 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/06 21:47:18 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//: _type("Dog") calismaz
Dog::Dog()
{
	cout << "Dog constructor called" << endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &src)
{
	cout << "Dog copy constructor" << endl;
    *this = src;
}

Dog::~Dog()
{
	cout << "Dog destructor called \n";
}

Dog	&Dog::operator=(const Dog &rhs)
{
	cout << "Dog copy assigment" << endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
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