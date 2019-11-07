#include <iostream>
#include <cstdlib>
#include "CPoint.h"

using namespace std;

int main()
{
	//D�claration d'un point
	CPoint ptMonPoint(6, 4);

	//On effectue l'homothetie de ptMonPoint par rapport � un point en 10,1 avec un rapport de 2
	CPoint homothetie = ptMonPoint.Homothetie(10, 1, 2);

	//On affiche les coordonn�es du point de l'homothetie;
	cout << "Homothetie x : " << homothetie.Abscisse() << endl;
	cout << "Homothetie y : " << homothetie.Ordonnee() << endl;


	//On pause pour voir les r�sultats
	system("pause");

	return 0;
}