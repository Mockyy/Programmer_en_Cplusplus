#pragma once
//Point dans un plan
class CPoint
{
protected:
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

	//Constructeur par défaut
	CPoint();

	//Constructeur par copie
	CPoint(const CPoint &p);

	//Constructeurs avec paramètres
	CPoint(float nX, float nY);

	//Destructeur
	~CPoint();

	//AFfichage
	void AffichePoint();

	//Déplacement : décale le point par les coodonnées données en paramètre
	void DeplacePoint(float nX, float nY);

	//Affichage : renvoie l'abscisse d'un point
	float Abscisse();

	//Affichage : Renvoie l'ordonnée d'un point
	float Ordonnee();

	//Homothetie : un aggrandissement ou une réduction d'un point en fonction d'un point donné en paramètre
	//CPoint Homothetie(float x, float y, float rapport);

	/*bool estEgal(CPoint &const pt) const;

	CPoint additionner(CPoint &const pt) const;

	CPoint soustraire(CPoint &const pt) const;

	void operator+=(CPoint &const pt);*/

};

