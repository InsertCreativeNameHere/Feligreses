#include<iostream>
#include<string>
typedef std::string String; // para no escribir todo el tiempo std::string
class Feligres{
	private:
		int ID;
		String Nombre;
		String Apellido;
		char I_ID;
		String N_ID;
		char Sexo;
		String TEL_cel;
		String TEL_fijo;
		String e_mail;
		String F_nacimiento;
		String Pais_nacimiento;
		String Ciudad_residencia;
		String Direccion;
		String Barrio;
		char *A_laboral; //las iniciales
		bool I_hijos;
		int Numero_hijos;
		char Rango_edades_hijos;
		String Iglesia;
			
	public:
		// Constructor
		Feligres(){};
		// Setters
		void setID(int id){ID = id;}
		void setNombre(String nombre){Nombre = nombre;}
		void setApellido(String ap){Apellido = ap;}
		void setI_ID(char i_id){I_ID = i_id;}
		void setN_ID(String n_id){N_ID = n_id;}
		void setSexo(char s){Sexo = s;}
		void setTel_cel(String cel){TEL_cel = cel;}
		void setTel_fijo(String fijo){TEL_fijo = fijo;}
		void setE_mail(String email){e_mail = email;}
		void setF_nacimiento(String f_nac){F_nacimiento = f_nac;}
		void setPais_nacimiento(String p_nac){Pais_nacimiento = p_nac;}
		void setCiudad_residencia(String c_res){Ciudad_residencia = c_res;}
		void setDireccion(String dir){Direccion = dir;}
		void setBarrio(String barrio){Barrio = barrio;}
		void setA_laboral(char a_laboral[3]){A_laboral = a_laboral;}
		void setI_hijos(bool i){I_hijos = i;}
		void setNumero_hijos(int n){Numero_hijos = n;}
		void setRango_edades_hijos(char r){Rango_edades_hijos = r;}
		void setIglesia(String n){Iglesia = n;}
		
		//Getters
		int getID(){return ID;}
		String getNombre(){return Nombre;}
		String getApellido(){return Apellido;}
		char getI_ID(){return I_ID;}
		String getN_ID(){return N_ID;}
		char getSexo(){return Sexo;}
		String getTel_cel(){return TEL_cel;}
		String getTel_fijo(){return TEL_fijo;}
		String getE_mail(){return e_mail;}
		String getF_nacimiento(){return F_nacimiento;}
		String getPais_nacimiento(){return Pais_nacimiento;}
		String getCiudad_res(){return Ciudad_residencia;}
		String getDir(){return Direccion;}
		String getBarrio(){return Barrio;}
		char *getA_labora(){return A_laboral;}
		bool getI_hijos(){return I_hijos;}
		int getN_hijos(){return Numero_hijos;}
		char getRango_e_hijos(){return Rango_edades_hijos;}
		String getIglesia(){return Iglesia;}
		
		//funcion para escribir los datos en el archivo (serializazión)
		friend std::ostream & operator << (std::ostream &out, const Feligres &f){
			out << f.ID << "\n"<< f.Nombre<<"\n";
			return out;
		}
		
		//funcion para leer de nuevo y ponerlo en el objeto
		friend std::istream & operator >> (std::istream &in,  Feligres &f){
			in >> f.ID;
			in >> f.Nombre;
			return in;
		}
};
