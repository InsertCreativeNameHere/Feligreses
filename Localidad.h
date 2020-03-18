class Localidad{
	private:
		int ID;
		char *Nom_loc;
		// barrios lista
	public:
		//  Constructor
		Localidad(){};
		
		// Setters
		void setID(int id){ID = id;}
		void setNom_loc(char nom [10]){Nom_loc = nom;}
		// void set barios
		// Getters
		int getID(){return ID;}
		char *getNom_loc(){return Nom_loc;}
		// lista getBarrios
};
