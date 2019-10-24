#include <iostream>
#include <cstdlib>
#include "CPoint.h"

using namespace std;

//POO C++
//Class (données et méthodes)


int main()
{
	CPoint ptMonPoint;
	CPoint ptPointOppose(30, 52);
	int x, y;

	//ptMonPoint.init(0, 0);

	cout << "Entrez un x ";
	cin >> x;

	cout << "Entrez un y ";
	cin >> y;

	ptMonPoint.setX(x);
	ptMonPoint.setY(y);


	cout << "X : " << ptMonPoint.getX() << endl;
	cout << "Y : " << ptMonPoint.getY() << endl;

	system("pause");


	return 0;
}