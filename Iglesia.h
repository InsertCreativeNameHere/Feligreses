class Iglesia{
	private:
		int ID;
		char *Nom_iglesia;
		char *Dir;
		char *Nom_sacerdote;
		
	public:
		//  Constructor
		Iglesia(){};
		
		// Setters
		void setID(int id){ID = id;}
		void setNom_iglesia(char nom [10]){Nom_iglesia = nom;}
		void setDir(char nom [10]){Dir = nom;}
		void setNom_sacerdote(char nom [10]){Nom_sacerdote = nom;}
		
		// Getters
		int getID(){return ID;}
		char *getNom_iglesia(){return Nom_iglesia;}
		char *getDir(){return Dir;}
		char *getNom_sacerdote(){return Nom_sacerdote;}
		
};
