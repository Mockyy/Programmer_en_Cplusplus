#pragma once
//Point dans un plan
class CPoint
{
private:
	//Donn�es membre / Attributs membres de la classe (embeded functions)
	float nX;
	float nY;
	char *cColor;

public:
	//-----Mutateurs et assesseurs-----\\
	
	//--Prototypes ou d�clarations--\\
	
	//Getters
	float getX();
	float getY();
	char* getColor();

	//Setters
	void setX(float a);
	void setY(float a);
	void setColor(char *couleur);

	//Constructeur par d�faut
	CPoint();

	CPoint(const CPoint &p);

	//Constructeurs avec param�tres
	CPoint(float nX, float nY);

	CPoint(float x, float y, char* couleur);

	//Destructeur
	~CPoint();

	//D�placement : d�cale le point par les coodonn�es donn�es en param�tre
	void DeplacePoint(float nX, float nY);

	//Affichage : renvoie l'abscisse d'un point
	float Abscisse();

	//Affichage : Renvoie l'ordonn�e d'un point
	float Ordonnee();

	//Homothetie : un aggrandissement ou une r�duction d'un point en fonction d'un point donn� en param�tre
	//CPoint Homothetie(float x, float y, float rapport);
};

