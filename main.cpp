/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 10:31:49 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/22 15:52:05 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Calculate a mid value with vectors in C++
double	moyen(vector <double> moyenne)
{
	int	i;
	double moy;

	i = 0;
	moy = 0;
	while (i < moyenne.size())
	{
		moy += moyenne[i];
		i++;
	}
	moy /= i;
	return (moy);
}

int main() 
{
	vector <double> moyenne;
	int i = 0;
	double moy = 0;

	while (i < 5)
	{
		double buf = 0;
		cin >> buf;
		moyenne.push_back(buf);
		i++;
	}
	moy = moyen(moyenne);
	cout << "Moyenne : " << moy << endl;
	return 0;
}