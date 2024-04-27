/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:54:43 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 15:29:54 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include <iostream>

#include "AMateria.hpp"

using std::cout;
using std::endl;
using std::string;

class Ice : public AMateria
{
	public:
	
		Ice();
		Ice(const Ice &src);

		virtual ~Ice();

		Ice &operator=(const Ice &src);

		virtual AMateria	*clone() const;
		virtual void 		use(ICharacter &target);
};

#endif
