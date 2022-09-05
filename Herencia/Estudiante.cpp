#include"Estudiante.h"

Estudiante::Estudiante(string iden, int eda, string nom, string ape, string cur):Persona(iden, eda,nom,ape) {
	curso = cur;
}

Estudiante::~Estudiante() {

}

void Estudiante::setCurso(string cur) {
	curso = cur;
}

string Estudiante :: getCurso() {
	return curso;
}