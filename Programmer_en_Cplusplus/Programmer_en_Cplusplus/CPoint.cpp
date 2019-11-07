#include "CPoint.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//Getters
float CPoint::getX()
{
	return nX;
}

float CPoint::getY()
{
	return nY;
}

//Setters
void CPoint::setX(float a)
{
	this->nX = a;
}

void CPoint::setY(float a)
{
	this->nY = a;
}

//Constructeur
CPoint::CPoint(float x, float y)
{
	this->nX = x;
	this->nY = y;
}

//Destructeur
CPoint::~CPoint()
{
	
}

//D�placer un point : on AJOUTE (on ne remplace pas)respectivemment aux coordonn�es du point les float en param�tres
void CPoint::DeplacePoint(float nX, float nY)
{
	this->setX(this->getX() + nX);
	this->setY(this->getY() + nY);
}

//Afficher un point : Renvoie les coordonn�es d'un point et les �crit
void CPoint::AffichePoint()
{
	cout << "X : " << this->getX() << " Y : " << this->getY() << endl;
}
