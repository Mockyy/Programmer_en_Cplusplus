#include <iostream>
#include <cstdlib>
#include "CPoint.h"

using namespace std;

int main()
{
	//D�claration d'un point
	CPoint ptMonPoint(45.10f, 50);

	//Affichage des coordonn�es du point
	ptMonPoint.AffichePoint();

	//Deux float pour demander � l'utilisateur de combien il veut d�caler son point
	float x, y;

	cout << "Entrez un x ";
	cin >> x;

	cout << "Entrez un y ";
	cin >> y;

	//On d�cale le point par les float entr�s plus haut
	ptMonPoint.DeplacePoint(x, y);

	//On affiche les coordonn�es du point
	ptMonPoint.AffichePoint();

	//On pause pour voir les r�sultats
	system("pause");

	return 0;
}