/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:47:22 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/06 21:48:01 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	cout << "Cat constructor called" << endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &src)
{
	cout << "Cat copy constructor" << endl;
    *this = src;
}

Cat::~Cat()
{
	cout << "Cat destructor called \n";
}

Cat	&Cat::operator=(const Cat &rhs)
{
	cout << "Cat copy assigment" << endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
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