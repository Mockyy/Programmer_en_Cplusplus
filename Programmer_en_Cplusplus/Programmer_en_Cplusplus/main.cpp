#include <iostream>
#include <cstdlib>
#include "CPoint.h"
#include "CCercle.h"

using namespace std;

int main()
{
	//Déclaration d'un point
	CPoint pt;

	char cColor[10] = { "rouge" };
	CPoint ptmonPoint(5, 9, cColor);
	CPoint ptmonpoint2(ptmonPoint);

	cout << "X : " << ptmonPoint.getX() << " Y : " << ptmonPoint.getY() << " Couleur : " << ptmonPoint.getColor() << endl;

	cout << " Color2 : " << ptmonpoint2.getColor() << endl;

	char cColor2[10] = { "vert" };
	ptmonpoint2.setColor(cColor2);

	cout << " Color2 : " << ptmonpoint2.getColor() << endl;

	//On pause pour voir les résultats
	system("pause");

	return 0;
}