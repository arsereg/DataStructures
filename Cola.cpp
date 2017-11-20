#include "stdafx.h"
#include "Cola.h"
#include <iostream>
#include "NodoEnt.h"

Cola::Cola() {
	longitud = 0;
	tope = NULL;
}

int Cola::getLongitud(void) {
	return longitud;
}
NodoEnt * Cola::getTope(void) {
	return tope;
}

bool Cola::pushElem(int pElem) {
	NodoEnt * nuevo = new NodoEnt(pElem);
	if (nuevo == NULL) {
		return false;
	}
	else {
		if (this->esVacio()) {
			tope = nuevo;
		}
		else {
			nuevo->setSig(tope);
			tope = nuevo;
		}
		longitud++;
		return true;
	}
}

NodoEnt * Cola::popElem() {
	NodoEnt * result = NULL;
	NodoEnt * aux = tope;
	if (esVacio()) {
		std::cout << "Esta vacio" << std::endl;
	}
	else {
		longitud--;
		result = getLast();
		for (int i = 0; i < longitud; i++) {
			aux = aux->getSig();
		}
		aux->setSig(NULL);
	}
	return result;
}

void Cola::setLongitud(int l) {
	longitud = l;
}
void Cola::setTope(NodoEnt* nodo) {
	tope = nodo;
}
Cola::~Cola(void) {
	NodoEnt * aux;
	if (!(this->esVacio())) {
		for (aux = tope; aux != NULL; aux = tope) {
			tope = tope->getSig();
			delete aux;
			longitud--;
		}
		std::cout << "Cola destruida." << std::endl;
	}
	else {
		std::cout << "La cola ya está vacía." << std::endl;
	}
}
bool Cola::esVacio() {
	if (getLongitud() == 0) {
		return true;
	}
	else {
		return false;
	}
}

NodoEnt * Cola::getLast() {
	NodoEnt * result = tope;
	while (result ->getSig() != NULL) {
		result = result ->getSig();
	}
	return result;
}

void Cola::show(void)
{
	std::cout << "Esta seguro?" << std::endl;
}
