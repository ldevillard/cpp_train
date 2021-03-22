/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevilla <ldevilla@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:21:29 by ldevilla          #+#    #+#             */
/*   Updated: 2021/03/22 15:52:53 by ldevilla         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Using file system in C++
int	main()
{
	string const fileName("./score.txt");
	ofstream myFile(fileName.c_str(), ios::app); //Open a file in append mode (ios::app) 
	int	score = 21;

	if (myFile)
		myFile << "My score : " << score << endl;
	else
		cout << "Error while opening file !" << endl;
	return (0);
}