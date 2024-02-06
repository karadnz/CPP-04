/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:49:16 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/06 22:54:59 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	cout << "WrongAnimal constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	cout << "WrongAnimal copy constructor" << endl;
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructor called \n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	cout << "WrongAnimal copy assigment" << endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

void	WrongAnimal::makeSound() const
{
	cout << "WrongAnimal sound" << endl;
}

string	WrongAnimal::getType() const
{
	return (this->_type);
}