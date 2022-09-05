#include"Estudiante.h"
using namespace std;

int main() {
	cout << "-----------------------HERENCIA-------------------------" << endl;  //primero ingreso datos de la clase base
	Persona per3("46553", 50, "Laura", "Torres");
	cout << "Nombre de per3.." << per3.getNombre() << endl;
	cout << "--------------------------------------------------------" << endl;
	Estudiante est1;
	cout << "Nombre de est1 es.." << est1.getNombre() << endl;
	est1.setCurso("Paradigmas de Programacion");
	cout<<"Curso de est1.." <<est1.getCurso()<<endl;
	cout << "--------------------------------------------------------" << endl;
	Estudiante est2("23445", 18, "Doris", "Garcia", "Estructuras");
	cout << "Nombre de est2 es.." << est2.getNombre() << endl;
	cout << "Curso de est2 es...." << est2.getCurso() << endl;
	cout << "--------------------------------------------------------" << endl;
	system("pause");
	return 0;
}