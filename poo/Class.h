/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 09:15:14 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/24 10:56:40 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_H
# define CLASS_H

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
	public :

	Personnage(); //Constructeur
	Personnage(std::string nomArme, int degatsArme); //Constructeur surchargé
	~Personnage(); //Destructeur
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage &cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant() const;
	void afficherEtat() const;

	private :

	int m_vie;
	int m_mana;
	Arme m_arme;
};

#endif