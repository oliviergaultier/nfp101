#define ABSCISSE 1
#define ORDONNEE 2

class Position
{
private:

	int x;
	int y;

public:

	Position(int _x = 0, int _y = 0);

	int     getX();
	int     getY();

	void    setX(int = 0);
	void    setY(int = 0);
	void incrementer(int, int = 1);
	void decrementer(int, int = 1);

	void afficher();
};
