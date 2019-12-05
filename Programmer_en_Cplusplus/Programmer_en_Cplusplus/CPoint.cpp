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

char* CPoint::getColor()
{
	return cColor;
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

void CPoint::setColor(char * couleur)
{
	strcpy_s(this->cColor, strlen(cColor) + 1, cColor);
}

//Constructeur sans paramètre
CPoint::CPoint()
{
}

//Constructeur de copie
CPoint::CPoint(const CPoint & p)
{
	this->nX = p.nX;
	this->nY = p.nY;
	//this->cColor = new char[strlen(p.cColor) + 1];
	//int nTaille = strlen(p.cColor) + 1;
	//strcpy_s(this->cColor, nTaille, p.cColor);
}

//Constructeur avec 2 paramètres
CPoint::CPoint(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}

//Constructeur
CPoint::CPoint(float x, float y, char* cCouleur)
{
	this->nX = x;
	this->nY = y;

	this->cColor = new char[strlen(cCouleur) + 1];
	int taille = strlen(cColor);
	strcpy_s(this->cColor, taille, cCouleur);
}

//Destructeur
CPoint::~CPoint()
{
	//delete cColor;
}

void CPoint::AffichePoint()
{
	cout << "X : " << nX << " | Y : " << nY << endl;
}

//Déplacer un point : on AJOUTE (on ne remplace pas)respectivemment aux coordonnées du point les float en paramètres
void CPoint::DeplacePoint(float nX, float nY)
{
	this->setX(this->getX() + nX);
	this->setY(this->getY() + nY);
}

//Affichage : renvoie l'abscisse d'un point
float CPoint::Abscisse()
{
	return this->nX;
}

//Affichage : renvoie l'ordonnée d'un point
float CPoint::Ordonnee()
{
	return this->nY;
}

bool CPoint::estEgal(CPoint &const pt) const
{
	return (nX == pt.nX && nY == pt.nY);
}

CPoint CPoint::additionner(CPoint & const pt) const
{
	CPoint resultat;
	resultat.nX = nX + pt.nX;
	resultat.nY = nY + pt.nY;

	return resultat;
}

CPoint CPoint::soustraire(CPoint & const pt) const
{
	CPoint resultat;
	resultat.nX = nX - pt.nX;
	resultat.nY = nY - pt.nY;
	return resultat;
}

void CPoint::operator+=(CPoint & const pt)
{
	nX + pt.nX;
	nY + pt.nY;
}



