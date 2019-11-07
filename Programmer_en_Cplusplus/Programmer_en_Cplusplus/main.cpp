#include <iostream>
#include <cstdlib>
#include "CPoint.h"

using namespace std;

int main()
{
	//Déclaration d'un point
	CPoint ptMonPoint(45.10f, 50);

	//Affichage des coordonnées du point
	cout << "X : " << ptMonPoint.Abscisse() << endl;
	cout << "Y : " << ptMonPoint.Ordonnee() << endl;

	//On pause pour voir les résultats
	system("pause");

	return 0;
}