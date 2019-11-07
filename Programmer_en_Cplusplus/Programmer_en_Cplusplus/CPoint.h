#pragma once
//Point dans un plan
class CPoint
{
private:
	//Données membre / Attributs membres de la classe (embeded functions)
	float nX;
	float nY;

public:
	//-----Mutateurs et assesseurs-----\\
	
	//--Prototypes ou déclarations--\\
	
	//Getters
	float getX();
	float getY();

	//Setters
	void setX(float a);
	void setY(float a);

	//Constructeur avec paramètres
	CPoint(float x, float y);

	//Destructeur
	~CPoint();

	//Déplacement : décale le point par les coodonnées données en paramètre
	void DeplacePoint(float nX, float nY);

	//Affichage : renvoie l'abscisse d'un point
	float Abscisse();

	//Affichage : Renvoie l'ordonnée d'un point
	float Ordonnee();
};

