#include "Multilista.h"
#include "feligresL.h"
#include "lista.h"

using namespace std;


void imprimir(){
	
}




main(){
	
	Multilista miLista(10);
	
	feligres a,b,c;
	a.actLaboral = "Ingenieria";
	a.apellido = "Perez";
	a.barrio = "Olarte";
	a.ciudadN = "Bogota";
	a.ciudadR = "Bogota";
	a.direccion = "dir";
	a.edad = 25;
	a.eMail = "algo";
	a.hijos = false;
	a.rangHijos = "0";
	a.sexo = "F";
	a.iglesia = "Monse";
	a.nombre = "Marta";
	a.numHijos = 0;
	a.rangHijos = "0";
	a.numID = 123;
	a.tipoID = "CC";
	
	b.actLaboral = "Ingenieria";
	b.apellido = "Lopez";
	b.barrio = "Olarte";
	b.ciudadN = "Bogota";
	b.ciudadR = "Bogota";
	b.direccion = "dir";
	b.edad = 25;
	b.eMail = "algo";
	b.hijos = false;
	b.rangHijos = "0";
	b.sexo = "F";
	b.iglesia = "Monse";
	b.nombre = "Julia";
	b.numHijos = 0;
	b.rangHijos = "0";
	b.numID = 456;
	b.tipoID = "CC";
	
	c.actLaboral = "Ingenieria";
	c.apellido = "Lopez";
	c.barrio = "Olarte";
	c.ciudadN = "Bogota";
	c.ciudadR = "Bogota";
	c.direccion = "dir";
	c.edad = 25;
	c.eMail = "algo";
	c.hijos = false;
	c.rangHijos = "0";
	c.sexo = "M";
	c.iglesia = "Monse";
	c.nombre = "Alguien";
	c.numHijos = 0;
	c.rangHijos = "0";
	c.numID = 456;
	c.tipoID = "CC";
	
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(a);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(b);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(c);
	cout<<"Inserte"<<endl;
	
	
	feligres d = miLista.buscar(3);
	cout<<d.nombre<<endl;
	
}
