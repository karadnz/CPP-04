/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:54:43 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 16:36:20 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include <iostream>

#include "AMateria.hpp"

using std::cout;
using std::endl;
using std::string;

class Cure : public AMateria
{
	public:
	
		Cure();
		Cure(const Cure &src);

		virtual ~Cure();

		Cure &operator=(const Cure &src);

		virtual AMateria	*clone() const;
		virtual void 		use(ICharacter &target);
};

#endif
