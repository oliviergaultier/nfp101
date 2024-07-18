
#include "Position.h"

#include <iostream>
using namespace std;

Position::Position(int _x, int _y) : x(_x), y(_y)
{}

int Position::getX()
{
	return x;
}

int Position::getY()
{
	return y;
}

void Position::setX(int _x)
{
	x = _x;
}

void Position::setY(int _y)
{
	y = _y;
}

void Position::afficher() 
{
	cout << "Position ( " << x << " ; " << y << ")" << endl;
}

void Position::incrementer(int _coordonnee, int _valeur)
{
	switch (_coordonnee)
	{
	case ABSCISSE: x += _valeur;
		break;
	case ORDONNEE: y += _valeur;
	}
}

void Position::decrementer(int _coordonnee, int _valeur)
{
	switch (_coordonnee)
	{
	case ABSCISSE: x -= _valeur;
		break;
	case ORDONNEE: y -= _valeur;
	}
}
