#pragma once
//Point dans un plan
class CPoint
{
private:
	//Données membre / Attributs membres de la classe (embeded functions)
	int nX;
	int nY;

	int *pnx;

public:
	//Mutateurs et assesseurs
	
	//Prototypes ou déclarations
	int getX();
	int getY();

	void setX(int a);
	void setY(int a);

	void init(int x, int y);

	//Constructeur sans paramètre
	CPoint();

	//Constructeur avec paramètres
	CPoint(int x, int y);

	//Destructeur
	~CPoint();
};

