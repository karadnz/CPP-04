/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:24:10 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 18:13:37 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class Character : public ICharacter
{
	public:
		Character(string const &name);
		Character(Character const &src);
		~Character();

		Character &operator=(Character const &rhs);

		string const	&getName() const;
		void 			equip(AMateria *m);
		void 			unequip(int idx);
		void 			use(int idx, ICharacter &target);

		
	private:
    	string		_name;
    	AMateria	*_inventory[4];
		
		//
		AMateria	**_backpack;
		int			_backpack_count;
		int			_backpack_cap;
		
		void		init_backpack(int backpack_cap = 5, int backpack_count = 0);
		void		add_backpack(AMateria *m);
		void		grow_backpack();
		void		empty_backpack();
};

#endif