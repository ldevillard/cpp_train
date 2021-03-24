/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:23:43 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/24 10:47:31 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARME_H
# define ARME_H

#include <string>
#include <iostream>

class Arme
{
	public:
 
	Arme();
	Arme(std::string nom, int degats);
	void changer(std::string nom, int degats);
	void afficher() const;
	int	getDegats() const;
 
	private:
 
	std::string m_nom;
	int m_degats;
};


#endif