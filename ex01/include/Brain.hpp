/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:24:24 by mkaraden          #+#    #+#             */
/*   Updated: 2024/02/07 00:54:17 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Brain
{
	public:
		Brain(string idea);


		Brain();
		Brain(const Brain &src);
		
		virtual ~Brain();

		Brain &operator=(const Brain &src);

		void	printIdeas() const;
	private:
		string _ideas[100];

};

#endif