#include "CPoint.h"
#include <cstdlib>

<<<<<<< Updated upstream
int CPoint::getX()
=======
using namespace std;

int CPoint::nbPoint = 0;

//Getters
float CPoint::getX()
>>>>>>> Stashed changes
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}

<<<<<<< Updated upstream
void CPoint::setX(int a)
=======
char * CPoint::getColor()
{
	return cColor;
}

//Setters
void CPoint::setX(float a)
>>>>>>> Stashed changes
{
	this->nX = a;
}

void CPoint::setY(int a)
{
	this->nY = a;
}

<<<<<<< Updated upstream
void CPoint::init(int x, int y)
=======
void CPoint::setColor(char * couleur)
>>>>>>> Stashed changes
{
	cColor = couleur;
}

<<<<<<< Updated upstream
//Constructeur sans param�tre
CPoint::CPoint()
=======
//Constructeur dans le .h

//Destructeur
CPoint::~CPoint()
{
	nbPoint--;
}

//D�placer un point : on AJOUTE (on ne remplace pas)respectivemment aux coordonn�es du point les float en param�tres
void CPoint::DeplacePoint(float nX, float nY)
{
	this->setX(this->getX() + nX);
	this->setY(this->getY() + nY);
}

//Affichage : renvoie l'abscisse d'un point
float CPoint::Abscisse()
>>>>>>> Stashed changes
{
	this->nX = 0;
	this->nY = 0;
	this->pnx = new int;
	*pnx = 0;
}

CPoint::CPoint(int x, int y)
{
	this->nX = x;
	this->nY = y;
}

CPoint::~CPoint()
{
	delete(pnx);
}

//Passage par valeur si l'objet poss�de des pointeurs -> passage par ADRESSE ou R�F�RENCE obligatoire
/*
bool CPoint::CoincidePoint(CPoint pt)
{
	if ((pt.nX == nX) && (pt.nY == nY))
	{
		return true;
	}
	else
	{
		return false;
	}
}*/

//Passage par adresse si l'objet poss�de des pointeurs -> passage par ADRESSE ou R�F�RENCE obligatoire
bool CPoint::CoincidePoint(CPoint * pt)
{
	if ((pt->nX == nX) && (pt->nY == nY))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Passage par r�f�rence si l'objet poss�de des pointeurs -> passage par ADRESSE ou R�F�RENCE obligatoire
bool CPoint::CoincidePoint(CPoint & pt)
{
	if ((pt.nX == nX) && (pt.nY == nY))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Renvoie la sym�trie d'un point par rapport � un point donn� en argument
CPoint CPoint::SymetriePoint()
{
	CPoint ptSym;

	ptSym.nX = -nX;
	ptSym.nY = -nY;

	return ptSym;
}

int CPoint::Compte()
{
	return nbPoint;
}

void CPoint::AffficherPoint() const
{
	cout << "X : " << nX << " Y : " << nY << endl;
}
