#include "stdafx.h"
#include "Lista.h"
#include <iostream>
#include "NodoEnt.h"

Lista::Lista() {
	longitud = 0;
	tope = NULL;
}

int Lista::getLongitud(void) {
	return longitud;
}
NodoEnt * Lista::getTope(void) {
	return tope;
}

bool Lista::add(int pElem) {
	NodoEnt * nuevo = new NodoEnt(pElem);
	if (nuevo == NULL) {
		return false;
	}
	else {
		if (this->esVacio()) {
			tope = nuevo;
		}
		else {
			getLast()->setSig(nuevo);
		}
		longitud++;
		return true;
	}
}

void Lista::setLongitud(int l) {
	longitud = l;
}
void Lista::setTope(NodoEnt* nodo) {
	tope = nodo;
}
Lista::~Lista(void) {
	NodoEnt * aux;
	if (!(this->esVacio())) {
		for (aux = tope; aux != NULL; aux = tope) {
			tope = tope->getSig();
			delete aux;
			longitud--;
		}
		std::cout << "Lista destruida." << std::endl;
	}
	else {
		std::cout << "La lista ya está vacía." << std::endl;
	}
}
bool Lista::esVacio() {
	if (getLongitud() == 0) {
		return true;
	}
	else {
		return false;
	}
}

NodoEnt * Lista::getLast() {
	NodoEnt * result = tope;
	while (result->getSig() != NULL) {
		result = result->getSig();
	}
	return result;
}

void Lista::agregarOrdenado(int num)
{
	int i = 0;
	NodoEnt * nodo = getTope();
	bool posicionNoEncontrada = true;
	do
	{
		if (num < nodo->getSig()->getInfo()) {
			posicionNoEncontrada = false;
			NodoEnt * aux = nodo->getSig();
			NodoEnt * nuevo = new NodoEnt(num);
			nuevo->setSig(aux);
			nodo->setSig(nuevo);
		}
		else {
			nodo = nodo->getSig();
		}
	} while (nodo->getSig() != NULL && posicionNoEncontrada);
}

void Lista::show() {
	NodoEnt * nodo = getTope();
	do {
		std::cout << nodo->getInfo() << std::endl;
		nodo = nodo->getSig();
	} while (nodo != NULL);
}
