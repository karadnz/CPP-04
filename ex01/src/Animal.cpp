/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:22:54 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/07 03:02:49 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal constructor called" << endl;
}

Animal::Animal(const Animal &src)
{
	cout << "Animal copy constructor" << endl;
    *this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called \n";
}

Animal	&Animal::operator=(const Animal &rhs)
{
	cout << "Animal copy assigment" << endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

void	Animal::makeSound() const
{
	cout << "Animal sound" << endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}