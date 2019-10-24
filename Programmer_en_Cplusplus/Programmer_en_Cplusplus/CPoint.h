#pragma once
//Point dans un plan
class CPoint
{
private:
	//Donn�es membre / Attributs membres de la classe (embeded functions)
	int nX;
	int nY;

	int *pnx;

public:
	//Mutateurs et assesseurs
	
	//Prototypes ou d�clarations
	int getX();
	int getY();

	void setX(int a);
	void setY(int a);

	void init(int x, int y);

	//Constructeur sans param�tre
	CPoint();

	//Constructeur avec param�tres
	CPoint(int x, int y);

	//Destructeur
	~CPoint();
};

