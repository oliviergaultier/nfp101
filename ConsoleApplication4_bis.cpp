// ConsoleApplication4_bis.cpp�: d�finit le point d'entr�e pour l'application console.
//


#include "Position.h"
#include "Couleur.h"

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void demarrage()
{
	cout << "+--------------------+" << endl;
	cout << "| Pacman version 0.2 |" << endl;
	cout << "|   - 02/09/2013 -   |" << endl;
	cout << "|                    |" << endl;
	cout << "|        olivier     |" << endl;
	cout << "|        gaultier    |" << endl;
	cout << "+--------------------+" << endl;
}

int main(int argc, char* argv[])
{
	demarrage();

	Position a;
	Position b(20, 30);

	a.afficher();
	b.afficher();

	Couleur noir(0, 0, 0);
	Couleur blanc(255, 255, 255);
	Couleur rouge(255, 0, 0);

	noir.afficher();
	blanc.afficher();
	rouge.afficher();


	return EXIT_SUCCESS;
}

