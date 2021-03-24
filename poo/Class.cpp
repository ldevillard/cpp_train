/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 09:15:12 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/24 11:03:06 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Class.h"

using namespace std;

Personnage::Personnage()
{
	m_vie = 100;
	m_mana = 100;
	m_arme = Arme();
}

Personnage::Personnage(string nomArme, int degatsArme)
{
	m_vie = 100;
	m_mana = 100;
	m_arme = Arme(nomArme, degatsArme);
}

Personnage::~Personnage()
{
	/* Rien à mettre ici car on ne fait pas d'allocation dynamique
	dans la classe Personnage. Le destructeur est donc inutile mais
	je le mets pour montrer à quoi cela ressemble.
	En temps normal, un destructeur fait souvent des delete et quelques
	autres vérifications si nécessaire avant la destruction de l'objet. */
}

void	Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;

	if (m_vie < 0)
		m_vie = 0;
}

void	Personnage::attaquer(Personnage &cible)
{
	cible.recevoirDegats(m_arme.getDegats());
}

void	Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie += quantitePotion;

	if (m_vie > 100)
		m_vie = 100;
}

void Personnage::afficherEtat() const
{
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
	m_arme.afficher();
}

void	Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool	Personnage::estVivant() const
{
	return (m_vie > 0);
}