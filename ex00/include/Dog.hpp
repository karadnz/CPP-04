/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:14:19 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/06 21:27:59 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

using std::cout;
using std::endl;
using std::string;

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		
		~Dog();

		Dog &operator=(const Dog &src);

		void	makeSound() const;
		string	getType() const;

};

#endif