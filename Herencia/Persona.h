#pragma once     //Clase base //Paso#1
#include<iostream>
#include<sstream>
using namespace std;

class Persona
{
protected:  //se usa protected no private para trabajar con herencia
	string ide;
	int edad;
	string nombre;
	string apellido;

public:
	//el constructor de Persona es predeterminado y con parametros
	Persona(string = "", int = 0,string = "", string = "" );
	virtual ~Persona();
	void setEdad(int);   //establece la nueva edad en la clase base
	void setNombre(string); //establece el nuevo nombre en la clase base
	string getNombre();  // devuelve el nombre de la persona
};

