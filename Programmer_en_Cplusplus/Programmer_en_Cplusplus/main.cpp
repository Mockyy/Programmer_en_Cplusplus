#include <iostream>
#include <cstdlib>
#include "CPoint.h"

using namespace std;

int main()
{
	//D�claration d'un point
	CPoint ptMonPoint(45.10f, 50);

	//Affichage des coordonn�es du point
	cout << "X : " << ptMonPoint.Abscisse() << endl;
	cout << "Y : " << ptMonPoint.Ordonnee() << endl;

	//On pause pour voir les r�sultats
	system("pause");

	return 0;
}