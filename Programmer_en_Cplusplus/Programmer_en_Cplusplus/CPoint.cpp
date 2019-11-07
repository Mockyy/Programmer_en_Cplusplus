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