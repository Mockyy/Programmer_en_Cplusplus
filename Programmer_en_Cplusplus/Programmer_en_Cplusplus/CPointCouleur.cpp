#include "CPointCouleur.h"
#include <iostream>

using namespace std;

void CPointCouleur::setCouleur(char* cCouleur)
{
	this->cCouleur = cCouleur;
}

char* CPointCouleur::getCouleur() const
{
	return this->cCouleur;
}

CPointCouleur::CPointCouleur()
{
}

CPointCouleur::CPointCouleur(char * cCouleur)
{
	this->cCouleur = cCouleur;
}

CPointCouleur::CPointCouleur(float nX, float nY, char * cCouleur)
{
	this->nX = nX;
	this->nY = nY;
	this->cCouleur = cCouleur;
}

CPointCouleur::~CPointCouleur()
{
}

void CPointCouleur::affichage()
{
	cout << "| X : " << this->nX << " | Y : " << this->nY << " | Couleur : " << this->cCouleur << " |" << endl;
}
