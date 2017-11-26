#pragma once
#ifndef NODOESTUDIANTES_H
#define NODOESTUDIANTES_H
#include "Estudiante.h"
class NodoEstudiantes
{
public:
	Estudiante * info;
	NodoEstudiantes * sig;
	NodoEstudiantes(Estudiante * e);
	~NodoEstudiantes();
	NodoEstudiantes * getSig();
	Estudiante * getInfo();
	void setInfo(Estudiante *);
	void setSig(NodoEstudiantes *);

private:

};

#endif