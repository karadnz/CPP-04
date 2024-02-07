/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:17:32 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/07 02:48:33 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

class Cat : public Animal
{
	public:
		Cat(string idea);
		
		Cat();
		Cat(const Cat &src);

		~Cat();

		Cat &operator=(const Cat &src);

		void	makeSound() const;
		string	getType() const;

		void	printIdeas() const;

	private:
		Brain *_brain;
	

};

#endif