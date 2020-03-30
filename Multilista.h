//Realizado por: Javier Aponte 20172020036
// 				 

#include <iostream>
#include <windows.h>
#include <fstream>
#include "lista.h"
#include "feligresL.h"
#include "iglesiaL.h"
#include "localidadL.h"
#include "cabeceras/cabeceraG.h"
#include "cabeceras/cabecera.h"
#include <string>


using namespace std;


//Declaracion de la clase
class Multilista{
	cabeceraGeneral atributos;
	feligres* feligreses;
	int tam;
	
	public: Multilista(int cant){
				feligreses = new feligres[cant+1];
				tam = 0;
				inicializarCab();
			}
			~Multilista();
			int tam_multi();
			void inicializarCab();
			void ordenarActividadL(string dato,int tam);
			void ordenarIglesia(string dato,int tam);
			void ordenarLocalidad(string dato,int tam);
			void ordenarSexo(string dato,int tam);
			void ordenarEdad(int dato,int tam);
			void ordenarcantHijos(string dato,int tam);
			void ordenarBarrio(string dato,int tam);
			void insertar(feligres e);
//			bool elminar(int pos);
			feligres buscar(int pos);
			bool multi_vacia();
			bool multi_llena();
//			ListaE* getLista();
};

//Metodos de la clase multilista

int Multilista::tam_multi(){
	return tam;
}

void Multilista::inicializarCab(){
	//Se inicializa las cabeceras que consisten en rangows cerrados
	
	cabecera a;
	//Cabecera por sexo
	a.nombre = "M";
	atributos.sexo.Sexo.insertar(a,0);
	a.nombre = "F";
	atributos.sexo.Sexo.insertar(a,0);
	
	//Cabecera por edad
	a.nombre = "18-24";
	atributos.edad.rangosEdades.insertar(a,0);
	a.nombre = "25-35";
	atributos.edad.rangosEdades.insertar(a,0);
	a.nombre = "36-45";
	atributos.edad.rangosEdades.insertar(a,0);
	a.nombre = "46-60";
	atributos.edad.rangosEdades.insertar(a,0);
	a.nombre = ">60";
	atributos.edad.rangosEdades.insertar(a,0);
	
	//Cabecera por numero de hijos
	
	a.nombre = "0";
	atributos.numHijos.rangosNumHijos.insertar(a,0);
	a.nombre = "1-2";
	atributos.numHijos.rangosNumHijos.insertar(a,0);
	a.nombre = "3-4";
	atributos.numHijos.rangosNumHijos.insertar(a,0);
	a.nombre = ">4";
	atributos.numHijos.rangosNumHijos.insertar(a,0);
	
}

feligres Multilista::buscar(int pos){
	return feligreses[pos];
}


bool Multilista::multi_llena(){
	if(tam == sizeof(feligreses)-2)
		return true;
	return false;
}

bool Multilista::multi_vacia(){
	if(tam==0)
		return true;
	return false;
}

void Multilista::insertar(feligres f){
	if(!multi_llena()){
		
		
		feligreses[tam+1] = f;
		tam++;
		
		//rangos abiertos
		ordenarActividadL(f.actLaboral,tam);
		ordenarIglesia(f.iglesia,tam);
		
		//rangos cerrados
		ordenarSexo(f.sexo,tam);
		ordenarEdad(f.edad,tam);
		ordenarcantHijos(f.rangHijos,tam);
		
		
	}else{
		cout<< "La Multilista esta llena en este momento, no ha sido imposible insertar el dato"<<endl;
	}
	
}


// se ordenan como una pila 
void Multilista::ordenarActividadL(string dato,int tam){
	
	int tamLista = atributos.actividadL.actividades.tamLista();
	bool encontrado = false;
	int pos;
	for(int i = 1;i<=tamLista;i++){
		if(atributos.actividadL.actividades.getDato(i).nombre == dato){
			encontrado = true;
			pos =i;
			break;
		}
	}
	if(encontrado){
		int aux = atributos.actividadL.actividades.getDato(pos).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigActividad = 0;
			cabecera a;
			a.nombre = atributos.actividadL.actividades.getDato(pos).nombre;
			a.cab = tam;
			atributos.actividadL.actividades.getDato(pos) = a;
		}else{
			feligreses[tam].sigActividad = aux;
			cabecera a;
			a.nombre = atributos.actividadL.actividades.getDato(pos).nombre;
			a.cab = tam;
			atributos.actividadL.actividades.getDato(pos) = a;
		}
	}else{
		cabecera a;
		a.nombre = dato;
		a.cab = 0;
		atributos.actividadL.actividades.insertar(a,tam);
	}
}

// se ordenan como una pila 
void Multilista::ordenarIglesia(string dato,int tam){
	
	int tamLista = atributos.iglesia.Iglesias.tamLista();
	bool encontrado = false;
	int pos;
	for(int i = 1;i<=tamLista;i++){
		if(atributos.iglesia.Iglesias.getDato(i).nombre == dato){
			encontrado = true;
			pos = i;
			break;
		}
	}
	if(encontrado){
		int aux =  atributos.iglesia.Iglesias.getDato(pos).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigIglesia = 0;
			cabecera a;
			a.nombre = atributos.iglesia.Iglesias.getDato(pos).nombre;
			a.cab = tam;
			 atributos.iglesia.Iglesias.getDato(pos) = a;
		}else{
			feligreses[tam].sigIglesia = aux;
			cabecera a;
			a.nombre = atributos.iglesia.Iglesias.getDato(pos).nombre;
			a.cab = tam;
			 atributos.iglesia.Iglesias.getDato(pos)= a;
		}
	}else{
		cabecera a;
		a.nombre = dato;
		a.cab = 0;
		atributos.iglesia.Iglesias.insertar(a,tam);
	}
}

void Multilista::ordenarBarrio(string dato,int tam){
	
	int tamLista = atributos.barrio.barrios.tamLista();
	bool encontrado = false;
	int pos;
	for(int i = 1;i<=tamLista;i++){
		if(atributos.barrio.barrios.getDato(i).nombre == dato){
			encontrado = true;
			pos = i;
			break;
		}
	}
	if(encontrado){
		int aux =  atributos.barrio.barrios.getDato(pos).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigIglesia = 0;
			cabecera a;
			a.nombre = atributos.barrio.barrios.getDato(pos).nombre;
			a.cab = tam;
			atributos.barrio.barrios.getDato(pos) = a;
		}else{
			feligreses[tam].sigIglesia = aux;
			cabecera a;
			a.nombre = atributos.barrio.barrios.getDato(pos).nombre;
			a.cab = tam;
			atributos.barrio.barrios.getDato(pos)= a;
		}
	}else{
		cabecera a;
		a.nombre = dato;
		a.cab = 0;
		atributos.barrio.barrios.insertar(a,tam);
	}
}



// se ordenan como una pila
void Multilista::ordenarSexo(string dato,int tam){
	
	if(dato == "M"){
		int aux =  atributos.sexo.Sexo.getDato(1).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigIglesia = 0;
			cabecera a;
			a.nombre = atributos.sexo.Sexo.getDato(1).nombre;
			a.cab = tam;
			atributos.sexo.Sexo.getDato(1) = a;
		}else{
			feligreses[tam].sigIglesia = aux;
		    cabecera a;
			a.nombre = atributos.sexo.Sexo.getDato(1).nombre;
			a.cab = tam;
			atributos.sexo.Sexo.getDato(1) = a;
		}
	}else{
		int aux =  atributos.sexo.Sexo.getDato(2).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigIglesia = 0;
			cabecera a;
			a.nombre = atributos.sexo.Sexo.getDato(2).nombre;
			a.cab = tam;
			atributos.sexo.Sexo.getDato(2) = a;
		}else{
			feligreses[tam].sigIglesia = aux;
		    cabecera a;
			a.nombre = atributos.sexo.Sexo.getDato(2).nombre;
			a.cab = tam;
			atributos.sexo.Sexo.getDato(2) = a;
		}
	}	
	
}

// se ordenan como una pila
void Multilista::ordenarEdad(int dato,int tam){
	
	
	if(dato >= 18 &&  dato <= 24){
		int aux =  atributos.edad.rangosEdades.getDato(1).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigEdad = 0;
			cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(1).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(1) = a;
		}else{
			feligreses[tam].sigEdad = aux;
		    cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(1).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(1) = a;
		}
	}else if (dato >= 25 &&  dato <= 35) { 
		int aux =  atributos.edad.rangosEdades.getDato(2).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigEdad = 0;
			cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(2).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(2) = a;
		}else{
			feligreses[tam].sigEdad = aux;
		    cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(2).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(2) = a;
		 }
	}else if(dato >= 36 &&  dato <= 45){
		int aux =  atributos.edad.rangosEdades.getDato(3).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigEdad = 0;
			cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(3).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(3) = a;
		}else{
			feligreses[tam].sigEdad = aux;
		    cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(3).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(3) = a;
		}
	}else if(dato >= 46 &&  dato <= 60){
		int aux =  atributos.edad.rangosEdades.getDato(4).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigEdad = 0;
			cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(4).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(4) = a;
		}else{
			feligreses[tam].sigEdad = aux;
		    cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(4).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(4) = a;
		 }
	}else{
		int aux =  atributos.edad.rangosEdades.getDato(5).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigEdad = 0;
			cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(5).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(5) = a;
		}else{
			feligreses[tam].sigEdad = aux;
		    cabecera a;
			a.nombre = atributos.edad.rangosEdades.getDato(5).nombre;
			a.cab = tam;
			atributos.edad.rangosEdades.getDato(5) = a;
		 }
	}
	
}

// se ordenan como una pila
void Multilista::ordenarcantHijos(string dato,int tam){
	
	
	if(dato == "0"){
		int aux =  atributos.numHijos.rangosNumHijos.getDato(1).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigIglesia = 0;
			cabecera a;
			a.nombre = atributos.numHijos.rangosNumHijos.getDato(1).nombre;
			a.cab = tam;
			atributos.numHijos.rangosNumHijos.getDato(1) = a;
		}else{
			feligreses[tam].sigIglesia = aux;
			cabecera a;
		    a.nombre = atributos.numHijos.rangosNumHijos.getDato(1).nombre;
			a.cab = tam;
			atributos.numHijos.rangosNumHijos.getDato(1) = a;
		}
	}else if(dato == "1-2"){
		int aux =  atributos.numHijos.rangosNumHijos.getDato(2).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigIglesia = 0;
			cabecera a;
			a.nombre = atributos.numHijos.rangosNumHijos.getDato(2).nombre;
			a.cab = tam;
			atributos.numHijos.rangosNumHijos.getDato(2) = a;
		}else{
			feligreses[tam].sigIglesia = aux;
			cabecera a;
		    a.nombre = atributos.numHijos.rangosNumHijos.getDato(2).nombre;
			a.cab = tam;
			atributos.numHijos.rangosNumHijos.getDato(2) = a;
		}
	}else if(dato == "3-4"){
		int aux =  atributos.numHijos.rangosNumHijos.getDato(3).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigIglesia = 0;
			cabecera a;
			a.nombre = atributos.numHijos.rangosNumHijos.getDato(3).nombre;
			a.cab = tam;
			atributos.numHijos.rangosNumHijos.getDato(3) = a;
		}else{
			feligreses[tam].sigIglesia = aux;
			cabecera a;
		    a.nombre = atributos.numHijos.rangosNumHijos.getDato(3).nombre;
			a.cab = tam;
			atributos.numHijos.rangosNumHijos.getDato(3) = a;
		}
	}else if(dato == ">4"){
		int aux =  atributos.numHijos.rangosNumHijos.getDato(4).cab;
		int cab = aux;
		if(cab == 0){
			feligreses[tam].sigIglesia = 0;
			cabecera a;
			a.nombre = atributos.numHijos.rangosNumHijos.getDato(4).nombre;
			a.cab = tam;
			atributos.numHijos.rangosNumHijos.getDato(4) = a;
		}else{
			feligreses[tam].sigIglesia = aux;
			cabecera a;
		    a.nombre = atributos.numHijos.rangosNumHijos.getDato(4).nombre;
			a.cab = tam;
			atributos.numHijos.rangosNumHijos.getDato(4) = a;
		}
	}
	
}



Multilista::~Multilista(){
}
