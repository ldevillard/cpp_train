/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poo.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:03:35 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/24 11:03:28 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Class.h"

using namespace std;

int main()
{
	//Création persos
	Personnage david, goliath("Épée aiguisée", 20);

	//Combat
	goliath.attaquer(david);
	david.boirePotionDeVie(20);
	goliath.attaquer(david);
	david.attaquer(goliath);

	goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
	goliath.attaquer(david);

	//Pause, on regarde l'état des joueurs
	cout << "David" << endl;
	david.afficherEtat();
	cout << endl << "Goliath" << endl;
	goliath.afficherEtat();
	
	return 0;
}