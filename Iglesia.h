#include<iostream>
#include<string>
typedef std::string String; // para no escribir todo el tiempo std::string

class Iglesia{
	private:
		int ID;
		String Nom_iglesia;
		String Dir;
		String Nom_sacerdote;
		
	public:
		//  Constructor
		Iglesia(){};
		
		// Setters
		void setID(int id){ID = id;}
		void setNom_iglesia(String nom){Nom_iglesia = nom;}
		void setDir(String nom){Dir = nom;}
		void setNom_sacerdote(String nom){Nom_sacerdote = nom;}
		
		// Getters
		int getID(){return ID;}
		String getNom_iglesia(){return Nom_iglesia;}
		String getDir(){return Dir;}
		String getNom_sacerdote(){return Nom_sacerdote;}
		
};
