#include "CPoint.h"
#include <cstdlib>

int CPoint::getX()
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}

void CPoint::setX(int a)
{
	this->nX = a;
}

void CPoint::setY(int a)
{
	this->nY = a;
}

void CPoint::init(int x, int y)
{
	this->nX = x;
	this->nY = y;
}

//Constructeur sans paramètre
CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;
	this->pnx = new int;
	*pnx = 0;
}

CPoint::CPoint(int x, int y)
{
	this->nX = x;
	this->nY = y;
}

CPoint::~CPoint()
{
	delete(pnx);
}
