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

CPoint::CPoint()
{
}

CPoint::CPoint(const CPoint & p)
{
	this->nX = nX;
	this->nY = nY;
	this->cColor = new char[strlen(p.cColor) + 1];
	int nTaille = strlen(p.cColor) + 1;
	strcpy_s(this->cColor, nTaille, p.cColor);
}

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

	this->cColor = new char[strlen(cColor) + 1];
	int taille = strlen(cColor);
	strcpy_s(this->cColor, taille, cColor);
}

//Destructeur
CPoint::~CPoint()
{
	delete cColor;
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
/*
//Calcul de l'homothetie : on calcule la distance entre les deux points grâce à Pythagore
CPoint CPoint::Homothetie(float ptX, float ptY, float rapport)
{
	float ptCx, ptCy, hypo, distanceX, distanceY;

	//Si les deux points ont la même abscisse ou ordonnée, l'hypotenuse est égale à la soustraction du plus grand par le plus petit
	if (ptX == this->getX())
	{
		if (ptY > this->getY())
		{
			hypo = ptY - this->getY();
		}
		else
		{
			hypo = this->getY() - ptY;
		}
	}
	if (ptY == this->getY())
	{
		if (ptX > this->getX())
		{
			hypo = ptX - this->getX();
		}
		else
		{
			hypo = this->getX() - ptX;
		}
	}

	//On calcule la distance du plus grand x moins le plus petit x
	if (ptX > this->getX())
	{
		ptCx = this->getX();
		distanceX = ptX - ptCx;
	}
	else
	{
		ptCx = ptX;
		distanceX = this->getX() - ptCx;
	}

	//Pareil avec y
	if (ptY > this->getY())
	{
		ptCy = this->getY();
		distanceY = ptY - ptCy;
	}
	else
	{
		ptCy = ptY;
		distanceY = this->getY() - ptCy;
	}

	//Pythagore
	hypo = sqrt(distanceX * distanceX + distanceY * distanceY);
	
	//Nouveau point
	CPoint Homo(this->getX() + (hypo * rapport), this->getY() + hypo * rapport);
	
	return Homo;
}
*/
