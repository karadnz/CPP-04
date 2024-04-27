/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:12:56 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 19:03:06 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	//cout << "Cure default constructor " << endl;
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	//cout << "Cure copy constructor " << endl;
	*this = src;
}

Cure &Cure::operator=(const Cure &rhs)
{
	//cout << "Cure assgiment operator " << endl;
	if (this != &rhs)
	{
		//this->_type = rhs._type; //subject doesent want us to copy the type 
	}
	return (*this); //to allow chaining a = b = c -> a = (c)
}

Cure::~Cure()
{
	//cout << "Cure destructor " << endl;
}

AMateria *Cure::clone() const 
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}