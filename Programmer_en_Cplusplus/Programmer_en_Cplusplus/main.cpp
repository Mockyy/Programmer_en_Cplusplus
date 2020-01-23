#include <iostream>
#include <cstdlib>
#include "CPointCouleur.h"

using namespace std;

//bool operator==(CPoint &const pt1, CPoint &const pt2)
//{
//	return pt1.estEgal(pt2);
//}
//
//bool operator !=(CPoint &const pt1, CPoint &const pt2)
//{
//	if (pt1 == pt2)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//}
//
//CPoint operator+(CPoint &const pt1, CPoint &const pt2)
//{
//	CPoint resultat = pt1.additionner(pt2);
//	return resultat;
//}
//
//CPoint operator-(CPoint &const pt1, CPoint &const pt2)
//{
//	CPoint resultat = pt1.soustraire(pt2);
//	return resultat;
//}


int main()
{
	//Déclaration d'un point
	/*CPoint pt;

	char cColor[10] = { "rouge" };
	CPoint ptmonPoint(5, 9, cColor);
	CPoint ptmonpoint2(ptmonPoint);

	cout << "X : " << ptmonPoint.getX() << " Y : " << ptmonPoint.getY() << " Couleur : " << ptmonPoint.getColor() << endl;

	cout << " Color2 : " << ptmonpoint2.getColor() << endl;

	char cColor2[10] = { "vert" };
	ptmonpoint2.setColor(cColor2);

	cout << " Color2 : " << ptmonpoint2.getColor() << endl;*/

	//CPoint pt1(10, 5);
	//CPoint pt2(15, 2);

	//

	//if (pt1 == pt2)
	//{
	//	cout << "Ego" << endl;
	//}
	//else
	//{
	//	cout << "Pas ego" << endl;
	//}

	//if (pt1 != pt2)
	//{
	//	cout << "Differents" << endl;
	//}
	//else
	//{
	//	cout << "Pas differents" << endl;
	//}

	//CPoint ptplus;
	////ptplus = pt1 + pt2;
	//pt1 += pt2;

	//ptplus.AffichePoint();

	//CPoint ptmoins;
	//ptmoins = pt1 - pt2;

	//ptmoins.AffichePoint();

	CPointCouleur ptPointdunecertainecouleur;

	char rouge[] = "FF000";
	CPointCouleur ptPointduneautrecouleur(2, 3, rouge);

	ptPointdunecertainecouleur.affichage();
	ptPointduneautrecouleur.affichage();

	//On pause pour voir les résultats
	system("pause");

	return 0;
}