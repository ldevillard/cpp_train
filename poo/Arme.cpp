/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arme.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:31:20 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/24 10:48:54 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Arme.h"

using namespace std;

Arme::Arme()
{
	m_nom = "Épée rouillée";
	m_degats = 10;
}

Arme::Arme(string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

void	Arme::changer(string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

void	Arme::afficher() const
{
	cout << "Nom arme : " << m_nom << " Degats : " << m_degats << endl;
}

int		Arme::getDegats() const
{
	return m_degats;
}