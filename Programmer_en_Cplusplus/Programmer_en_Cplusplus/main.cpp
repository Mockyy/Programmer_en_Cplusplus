#include <iostream>
#include <cstdlib>
#include "CPoint.h"

using namespace std;

int main()
{
	//Déclaration d'un point
	CPoint ptMonPoint(45.10f, 50);

	//Affichage des coordonnées du point
	ptMonPoint.AffichePoint();

	//Deux float pour demander à l'utilisateur de combien il veut décaler son point
	float x, y;

	cout << "Entrez un x ";
	cin >> x;

	cout << "Entrez un y ";
	cin >> y;

	//On décale le point par les float entrés plus haut
	ptMonPoint.DeplacePoint(x, y);

	//On affiche les coordonnées du point
	ptMonPoint.AffichePoint();

	//On pause pour voir les résultats
	system("pause");

	return 0;
}