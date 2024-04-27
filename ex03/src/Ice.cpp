/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:12:56 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 15:58:44 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	//cout << "Ice default constructor " << endl;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	//cout << "Ice copy constructor " << endl;
	*this = src;
}

Ice &Ice::operator=(const Ice &rhs)
{
	//cout << "Ice assigment constructor " << endl;
	if (this != &rhs)
	{
		this->_type = rhs._type; //copying type here??
	}
	return (*this); //to allow chaining a = b = c -> a = (c)
}

Ice::~Ice()
{
	//cout << "Ice destructor " << endl;
}

AMateria *Ice::clone() const 
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}