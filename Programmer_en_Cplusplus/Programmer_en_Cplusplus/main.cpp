#include <iostream>
#include <cstdlib>
#include "CPoint.h"


//POO C++
//Class (données et méthodes)


int main()
{
	CPoint ptMonPoint;
	int a;

	std::cout << "Entrez un nombre ";
	std::cin >> a;

	ptMonPoint.setX(a);
	ptMonPoint.setY(a * 2);

	std::cout << "X : " << ptMonPoint.getX() << std::endl;
	std::cout << "Y : " << ptMonPoint.getY() << std::endl;

	system("pause");


	return 0;
}