class Couleur
{
private:

	unsigned int composanteRouge;
	unsigned int composanteVerte;
	unsigned int composanteBleue;

public:

	Couleur(unsigned int _composanteRouge = 0,
		unsigned int _composanteVerte = 0,
		unsigned int _composanteBleue = 0);

	unsigned int getComposanteRouge();
	unsigned int getComposanteVerte();
	unsigned int getComposanteBleue();

	void          setComposanteRouge(unsigned int = 0);
	void          setComposanteVerte(unsigned int = 0);
	void          setComposanteBleue(unsigned int = 0);

	void          afficher();
};