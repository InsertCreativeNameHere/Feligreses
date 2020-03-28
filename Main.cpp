#include "Multilista.h"
#include "feligresL.h"

using namespace std;

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
	
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(a);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(b);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(a);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(b);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(a);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(b);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(a);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(b);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(a);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(b);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(a);
	cout<<"Inserte"<<endl;
	
	cout<<"voy a insertar"<<endl;
	miLista.insertar(b);
	cout<<"Inserte"<<endl;
	
	
	c = miLista.buscar(1);
	cout<<"nom: "<<c.nombre<<endl;
	
	
	
	
}
