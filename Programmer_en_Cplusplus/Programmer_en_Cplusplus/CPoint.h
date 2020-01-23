#pragma once
//Point dans un plan
class CPoint
{
protected:
	//Donn�es membre / Attributs membres de la classe (embeded functions)
	float nX;
	float nY;

public:
	//-----Mutateurs et assesseurs-----\\
	
	//--Prototypes ou d�clarations--\\
	
	//Getters
	float getX();
	float getY();

	//Setters
	void setX(float a);
	void setY(float a);

	//Constructeur par d�faut
	CPoint();

	//Constructeur par copie
	CPoint(const CPoint &p);

	//Constructeurs avec param�tres
	CPoint(float nX, float nY);

	//Destructeur
	~CPoint();

	//AFfichage
	void AffichePoint();

	//D�placement : d�cale le point par les coodonn�es donn�es en param�tre
	void DeplacePoint(float nX, float nY);

	//Affichage : renvoie l'abscisse d'un point
	float Abscisse();

	//Affichage : Renvoie l'ordonn�e d'un point
	float Ordonnee();

	//Homothetie : un aggrandissement ou une r�duction d'un point en fonction d'un point donn� en param�tre
	//CPoint Homothetie(float x, float y, float rapport);

	/*bool estEgal(CPoint &const pt) const;

	CPoint additionner(CPoint &const pt) const;

	CPoint soustraire(CPoint &const pt) const;

	void operator+=(CPoint &const pt);*/

};

