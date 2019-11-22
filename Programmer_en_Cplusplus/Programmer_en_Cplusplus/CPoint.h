#pragma once
//Point dans un plan
class CPoint
{
private:
	//Données membre / Attributs membres de la classe (embeded functions)
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
	//Prototypes ou déclarations
	int getX();
	int getY();

	void setX(int a);
	void setY(int a);

	void init(int x, int y);

	//Constructeur sans paramètre
	CPoint();

	//Constructeur avec paramètres
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

	//Constructeur avec paramètres
	inline CPoint(float x = 0, float y = 0, char* couleur = NULL)
	{
		this->nX = x;
		this->nY = y;
		this->cColor = couleur;
		nbPoint++;
	}

	//Destructeur
	~CPoint();

	//Déplacement : décale le point par les coodonnées données en paramètre
	void DeplacePoint(float nX, float nY);

	//Affichage : renvoie l'abscisse d'un point
	float Abscisse();

	//Affichage : Renvoie l'ordonnée d'un point
	float Ordonnee();

	//Homothetie : un aggrandissement ou une réduction d'un point en fonction d'un point donné en paramètre
	CPoint Homothetie(float x, float y, float rapport);

	//Retourne vrai si les point sont égaux (passage par valeur)
	bool CoincidePoint(CPoint pt);

	//Passage par adresse
	bool CoincidePoint(CPoint *pt);

	//Passage par référence
	bool CoincidePoint(CPoint &pt);

	//Symétrie
	CPoint SymetriePoint();

	static int Compte();

	//Const assure qu'aucune valeur ne sera bléssée pendant le tournage
	void AffficherPoint()const;
>>>>>>> Stashed changes
};

