/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:55:36 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/06 23:39:26 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	cout << "WrongCat constructor called" << endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src)
{
	cout << "WrongCat copy constructor" << endl;
    *this = src;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor called \n";
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	cout << "WrongCat copy assigment" << endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

void	WrongCat::makeSound() const
{
	cout << "WrongCat sound" << endl;
}

string	WrongCat::getType() const
{
	return (this->_type);
}