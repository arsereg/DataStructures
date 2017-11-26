#include "stdafx.h"
#include "ListaCursos.h"
#include <iostream>
#include "NodoCurso.h"

ListaCursos::ListaCursos() {
	longitud = 0;
	tope = NULL;
}

int ListaCursos::getLongitud(void) {
	return longitud;
}

void ListaCursos::add(Curso * e)
{
	NodoCursos * nuevo = new NodoCursos(e);
	if (tope == NULL) {
		tope = nuevo;
	}
	else {
		getLast()->setSig(nuevo);
	}
	longitud++;

}

NodoCursos * ListaCursos::getTope(void)
{
	return tope;
}

void ListaCursos::setLongitud(int l) {
	longitud = l;
}
void ListaCursos::setTope(NodoCursos * x)
{
	tope = x;
}

NodoCursos * ListaCursos::getLast() {
	NodoCursos * result = tope;
	while (result->getSig() != NULL) {
		result = result->getSig();
	}
	return result;
}

ListaCursos::~ListaCursos(void) {
	NodoCursos * aux;
		for (aux = tope; aux != NULL; aux = tope) {
			tope = tope->getSig();
			delete aux;
			longitud--;
		}
		std::cout << "Lista destruida." << std::endl;
	
}