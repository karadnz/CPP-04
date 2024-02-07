/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:24:20 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/07 03:03:09 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(string idea)
{
	cout << "Brain constructor called" << endl;

	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = idea;
	}
}

Brain::Brain()
{
	cout << "Brain constructor called" << endl;
	
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "nothing";
	}
}

Brain::Brain(const Brain &src)
{
	cout << "Brain copy constructor" << endl;
	*this = src;
}

Brain::~Brain()
{
	cout << "Brain destructor called \n";
}

Brain &Brain::operator=(const Brain &rhs)
{
	cout << "Brain copy assigment" << endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}


void	Brain::printIdeas() const
{
	for(int i = 0; i < 100; i++)
	{
		cout << this->_ideas[i];
	}
	cout << endl;
}