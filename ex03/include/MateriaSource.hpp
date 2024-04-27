/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:50:44 by mkaraden          #+#    #+#             */
/*   Updated: 2024/04/27 00:24:58 by mkaraden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#include <string>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();

		MateriaSource &operator=(const MateriaSource &other);

		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(const std::string &type);

	private:
		static const int memory_limit = 4; //subject says they dont have to be unique

		AMateria *_materias[MateriaSource::memory_limit];
		int _learned_count;
};

#endif