#include "Persona.h"

Persona::Persona(string iden, int eda, string nom, string ape) {
	ide = iden;
	edad = eda;
	nombre = nom;
	apellido = ape;

}

Persona::~Persona() {

}

void Persona::setEdad(int eda) {
	edad = eda;
}

void Persona::setNombre(string nom) {
	nombre = nom;
}

string Persona::getNombre() {
	return nombre;
}