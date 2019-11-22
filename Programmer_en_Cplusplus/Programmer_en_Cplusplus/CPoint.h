#pragma once
//Point dans un plan
class CPoint
{
private:
	//Données membre / Attributs membres de la classe (embeded functions)
	float nX;
	float nY;
	char *cColor;

public:
	//-----Mutateurs et assesseurs-----\\
	
	//--Prototypes ou déclarations--\\
	
	//Getters
	float getX();
	float getY();
	char* getColor();

	//Setters
	void setX(float a);
	void setY(float a);
	void setColor(char *couleur);

	//Constructeur par défaut
	CPoint();

	CPoint(const CPoint &p);

	//Constructeurs avec paramètres
	CPoint(float nX, float nY);

	CPoint(float x, float y, char* couleur);

	//Destructeur
	~CPoint();

	//Déplacement : décale le point par les coodonnées données en paramètre
	void DeplacePoint(float nX, float nY);

	//Affichage : renvoie l'abscisse d'un point
	float Abscisse();

	//Affichage : Renvoie l'ordonnée d'un point
	float Ordonnee();

	//Homothetie : un aggrandissement ou une réduction d'un point en fonction d'un point donné en paramètre
	//CPoint Homothetie(float x, float y, float rapport);
};

