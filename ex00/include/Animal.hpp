/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:12:04 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/06 21:37:51 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal
{
	public:
		Animal();
		Animal(const Animal &src);
		
		virtual ~Animal();

		Animal &operator=(const Animal &src);

		virtual	void	makeSound() const;
		virtual string	getType() const;

	protected:
		string _type;

};

#endif