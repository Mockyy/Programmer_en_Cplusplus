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
	const int taille = 10;
	CPoint::CPoint(0, 0);
	cCouleur = new char[taille];
	strcpy_s(cCouleur, taille * sizeof(char), "0xfff");
}

CPointCouleur::CPointCouleur(float nX, float nY, char * cCoul) : CPoint(nX, nY)
{
	const int taille = strlen(cCoul) + 1;
	cCouleur = new char[taille];
	strcpy_s(cCouleur, taille * sizeof(char), cCoul);
}

CPointCouleur::~CPointCouleur()
{
}

void CPointCouleur::affichage()
{
	CPoint::AffichePoint();
	cout << " | Couleur : " << this->cCouleur << " |" << endl;
}
