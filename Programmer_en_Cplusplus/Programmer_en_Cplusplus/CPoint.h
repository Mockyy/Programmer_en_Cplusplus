#pragma once
//Point dans un plan
class CPoint
{
private:
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

	//Constructeur avec param�tres
	CPoint(float x, float y);

	//Destructeur
	~CPoint();

	//D�placement : d�cale le point par les coodonn�es donn�es en param�tre
	void DeplacePoint(float nX, float nY);

	//Affichage : renvoie l'abscisse d'un point
	float Abscisse();

	//Affichage : Renvoie l'ordonn�e d'un point
	float Ordonnee();
};

