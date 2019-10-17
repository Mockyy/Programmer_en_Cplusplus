#pragma once
//Point dans un plan
class CPoint
{
private:
	//Données membre / Attributs membres de la classe (embeded functions)
	int nX;
	int nY;

public:
	//Mutateurs et assesseurs
	
	//Prototypes ou déclarations
	int getX();
	int getY();

	void setX(int a);
	void setY(int a);
};

