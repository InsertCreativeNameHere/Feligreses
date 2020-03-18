#include<iostream>
#include<string>
typedef std::string String; // para no escribir todo el tiempo std::string

class Localidad{
	private:
		int ID;
		String Nom_loc;
		// barrios lista
	public:
		//  Constructor
		Localidad(){};
		
		// Setters
		void setID(int id){ID = id;}
		void setNom_loc(String nom){Nom_loc = nom;}
		// void set barios
		// Getters
		int getID(){return ID;}
		String getNom_loc(){return Nom_loc;}
		// lista getBarrios
};
