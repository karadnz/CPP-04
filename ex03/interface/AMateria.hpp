/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:51:16 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 18:44:44 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

#include "ICharacter.hpp"

class ICharacter; // forward declaring

class AMateria
{
	public:
		AMateria();
		AMateria(string const &type);
		AMateria(const AMateria &src);

		virtual ~AMateria();

		AMateria &operator=(const AMateria &src); 

		string const		&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

	protected:
		string _type;
};

#endif