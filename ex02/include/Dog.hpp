/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:14:19 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/07 00:51:28 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Dog : public Animal
{
	public:
		Dog(string idea);
		
		Dog();
		Dog(const Dog &copy);
		
		~Dog();

		Dog &operator=(const Dog &src);

		void	makeSound() const;
		string	getType() const;

		void	printIdeas() const;
	private:
		Brain *_brain;

};

#endif