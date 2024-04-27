/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:01:44 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 16:51:24 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
	//cout << "AMateria default constructor for: " << this->_type << endl;
}

AMateria::AMateria(string const &type) : _type(type)
{
	//cout << "AMateria constructor for: " << this->_type << endl;
}

AMateria::AMateria(AMateria const &src)
{
	//cout << "AMateria copy constructor for: " << this->_type << endl;
	*this = src;
}

AMateria::~AMateria(void)
{
	//cout << "AMateria destructor for: " << this->_type << endl;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	//cout << "AMateria copy assigment" << endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	cout << "AMateria " << this->_type << " used on " << target.getName() << endl;
}