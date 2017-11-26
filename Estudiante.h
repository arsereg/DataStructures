#pragma once
#include <string>
using std::string;
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

class Estudiante
{
public:
	Estudiante(string id, string nom, double grade);
	~Estudiante();
	string getCedula();
	string getNombre();
	double getNota();

private:
	string cedula;
	string nombre;
	double nota;

};

#endif