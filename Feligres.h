class Feligres{
	private:
		int ID;
		char *Nombre;
		char *Apellido;
		char I_ID;
		char *N_ID;
		char Sexo;
		char *TEL_cel;
		char *TEL_fijo;
		char *e_mail;
		char *F_nacimiento;
		char *Pais_nacimiento;
		char *Ciudad_residencia;
		char *Direccion;
		char *Barrio;
		char *A_laboral; //las iniciales
		bool I_hijos;
		int Numero_hijos;
		char Rango_edades_hijos;
		char *Iglesia;
			
	public:
		// Constructor
		Feligres(){};
		
		// Setters
		void setID(int id){ID = id;}
		void setNombre(char nombre [10]){Nombre = nombre;}
		void setApellido(char ap[10]){Apellido = ap;}
		void setI_ID(char i_id){I_ID = i_id;}
		void setN_ID(char n_id[10]){N_ID = n_id;}
		void setSexo(char s){Sexo = s;}
		void setTel_cel(char cel[10]){TEL_cel = cel;}
		void setTel_fijo(char fijo[10]){TEL_fijo = fijo;}
		void setE_mail(char email[20]){e_mail = email;}
		void setF_nacimiento(char f_nac[10]){F_nacimiento = f_nac;}
		void setPais_nacimiento(char p_nac[10]){Pais_nacimiento = p_nac;}
		void setCiudad_residencia(char c_res[10]){Ciudad_residencia = c_res;}
		void setDireccion(char dir[10]){Direccion = dir;}
		void setBarrio(char barrio[10]){Barrio = barrio;}
		void setA_laboral(char a_laboral[3]){A_laboral = a_laboral;}
		void setI_hijos(bool i){I_hijos = i;}
		void setNumero_hijos(int n){Numero_hijos = n;}
		void setRango_edades_hijos(char r){Rango_edades_hijos = r;}
		void setIglesia(char n[10]){Iglesia = n;}
		
		//Getters
		int getID(){return ID;}
		char *getNombre(){return Nombre;}
		char *getApellido(){return Apellido;}
		char getI_ID(){return I_ID;}
		char *getN_ID(){return N_ID;}
		char getSexo(){return Sexo;}
		char *getTel_cel(){return TEL_cel;}
		char *getTel_fijo(){return TEL_fijo;}
		char *getE_mail(){return e_mail;}
		char *getF_nacimiento(){return F_nacimiento;}
		char *getPais_nacimiento(){return Pais_nacimiento;}
		char *getCiudad_res(){return Ciudad_residencia;}
		char *getDir(){return Direccion;}
		char *getBarrio(){return Barrio;}
		char *getA_labora(){return A_laboral;}
		bool getI_hijos(){return I_hijos;}
		int getN_hijos(){return Numero_hijos;}
		char getRango_e_hijos(){return Rango_edades_hijos;}
		char *getIglesia(){return Iglesia;}
		
};
