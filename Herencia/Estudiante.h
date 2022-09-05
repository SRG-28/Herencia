#pragma once
#include"Persona.h"
using namespace std;

class Estudiante : public Persona{
private:
	string curso;
public:
	Estudiante(string = "", int = 0,string = "", string = "", string = ""); //constructor datos de persona + curso (ultimo string...)
	virtual ~Estudiante();
	void setCurso(string);
	string getCurso();
};