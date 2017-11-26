#include "stdafx.h"
#include "NodoEstudiantes.h"


NodoEstudiantes::NodoEstudiantes(Estudiante * e)
{
	setInfo(e);
}


NodoEstudiantes::~NodoEstudiantes()
{
}

NodoEstudiantes * NodoEstudiantes::getSig()
{
	return sig;
}

Estudiante * NodoEstudiantes::getInfo()
{
	return info;
}

void NodoEstudiantes::setInfo(Estudiante * e)
{
	info = e;
}

void NodoEstudiantes::setSig(NodoEstudiantes * e)
{
	sig = e;
}


