#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona {
	// atributis 
	private : string nit;
	
	//constructor
	public :
    Cliente (){
    } 
	
	Cliente(string nom,string ape,string dir,int tel,string n) : Persona(nom,ape,dir,tel){
		nit = n;
	}
	void mostrar(){
		cout<<"_______________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		
	}
}; 
