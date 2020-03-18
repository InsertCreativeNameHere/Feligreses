//definición del main
#include <iostream>
#include "Feligres.h"
#include <fstream>
using namespace std;


//funciones
void menu();
void llenar_datos_f();
void get_data();

int main(){
	menu();
	return 0;
}

void menu(){
	cout<<"proyecto final de ciencias 1\n";
	llenar_datos_f();
	get_data();
}

void llenar_datos_f(){
	Feligres f;
	std:ofstream out("prueba_ser.txt");
	for(int i=0;i<3;i++){
		f.setID(i);
		f.setNombre("Daniel"+i);
		out<<f;
	}
		
	out.close();
}

void get_data(){
	std:ifstream in("prueba_ser.txt");
	Feligres f;
	for(int i=0; i<3; i++){
		in>>f;
		cout<<"el id del feligres es: "<<f.getID()<<" y su nombre es: "<<f.getNombre()<<endl;
	}
	in.close();
}
