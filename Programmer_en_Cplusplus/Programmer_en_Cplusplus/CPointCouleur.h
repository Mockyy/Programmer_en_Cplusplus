#pragma once
#include "CPoint.h"
class CPointCouleur : public CPoint
{
private:

	char* cCouleur;

public:

	//Setter & getter
	void setCouleur(char* cCouleur);
	char* getCouleur() const;

	//Constructeurs
	CPointCouleur();
	CPointCouleur(float nX, float nY, char* cCouleur);

	//Destructeur
	~CPointCouleur();

	//Affichage
	void affichage();
};

