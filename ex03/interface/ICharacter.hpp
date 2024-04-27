/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:48:51 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 18:44:40 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

#include "AMateria.hpp"

class AMateria; //forward declaring

class ICharacter
{
    public:
    
    virtual ~ICharacter() {} // we have to
    
    virtual string const    &getName() const = 0; 
    virtual void            equip(AMateria *m) = 0;
    virtual void            unequip(int idx) = 0;
    virtual void            use(int idx, ICharacter &target) = 0;
};

#endif