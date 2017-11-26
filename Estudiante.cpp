#include "stdafx.h"
#include "Estudiante.h"
#include "ListaCursos.h"

Estudiante::Estudiante(string id, string nom, double grade)
{
	cedula = id;
	nombre = nom;
	nota = grade;
}


Estudiante::~Estudiante()
{
}

string Estudiante::getCedula()
{
	return cedula;
}

string Estudiante::getNombre()
{
	return nombre;
}

double Estudiante::getNota()
{
	return nota;
}

