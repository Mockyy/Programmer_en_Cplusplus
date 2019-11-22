#pragma once
//Point dans un plan
class CPoint
{
private:
	//Donn�es membre / Attributs membres de la classe (embeded functions)
<<<<<<< Updated upstream
	int nX;
	int nY;

	int *pnx;
=======
	float nX;
	float nY;
	char* cColor;

	static int nbPoint;
>>>>>>> Stashed changes

public:
	//Mutateurs et assesseurs
	
<<<<<<< Updated upstream
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
=======
	//Getters
	float getX();
	float getY();
	char* getColor();

	//Setters
	void setX(float a);
	void setY(float a);
	void setColor(char* couleur);

	//Constructeur avec param�tres
	inline CPoint(float x = 0, float y = 0, char* couleur = NULL)
	{
		this->nX = x;
		this->nY = y;
		this->cColor = couleur;
		nbPoint++;
	}

	//Destructeur
	~CPoint();

	//D�placement : d�cale le point par les coodonn�es donn�es en param�tre
	void DeplacePoint(float nX, float nY);

	//Affichage : renvoie l'abscisse d'un point
	float Abscisse();

	//Affichage : Renvoie l'ordonn�e d'un point
	float Ordonnee();

	//Homothetie : un aggrandissement ou une r�duction d'un point en fonction d'un point donn� en param�tre
	CPoint Homothetie(float x, float y, float rapport);

	//Retourne vrai si les point sont �gaux (passage par valeur)
	bool CoincidePoint(CPoint pt);

	//Passage par adresse
	bool CoincidePoint(CPoint *pt);

	//Passage par r�f�rence
	bool CoincidePoint(CPoint &pt);

	//Sym�trie
	CPoint SymetriePoint();

	static int Compte();

	//Const assure qu'aucune valeur ne sera bl�ss�e pendant le tournage
	void AffficherPoint()const;
>>>>>>> Stashed changes
};

