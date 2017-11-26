#include "stdafx.h"
#include "ListaEstudiante.h"
#include <iostream>
#include "NodoEstudiantes.h"

ListaEstudiante::ListaEstudiante() {
	longitud = 0;
	tope = NULL;
}

int ListaEstudiante::getLongitud(void) {
	return longitud;
}

void ListaEstudiante::add(Estudiante * e)
{
	NodoEstudiantes * nuevo = new NodoEstudiantes(e);
	if (tope == NULL) {
		tope = nuevo;
	}
	else {
		getLast()->setSig(nuevo);
	}
	longitud++;

}

NodoEstudiantes * ListaEstudiante::getTope(void)
{
	return tope;
}

void ListaEstudiante::setLongitud(int l) {
	longitud = l;
}
void ListaEstudiante::setTope(NodoEstudiantes * x)
{
	tope = x;
}

NodoEstudiantes * ListaEstudiante::getLast() {
	NodoEstudiantes * result = tope;
	while (result->getSig() != NULL) {
		result = result->getSig();
	}
	return result;
}

ListaEstudiante::~ListaEstudiante(void) {
	NodoEstudiantes * aux;
	for (aux = tope; aux != NULL; aux = tope) {
		tope = tope->getSig();
		delete aux;
		longitud--;
	}
	std::cout << "Lista destruida." << std::endl;

}