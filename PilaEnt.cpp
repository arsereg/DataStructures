#include "stdafx.h"
#include "PilaEnt.h"
#include<iostream>
#include "NodoEnt.h"

PilaEnt::PilaEnt(void) {
	longitud = 0;
	tope = NULL;
}

int PilaEnt::getLongitud(void) {
	return longitud;
}

NodoEnt * PilaEnt::getTope(void) {
	return tope;
}

bool PilaEnt::pushElem(int pElem) {
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

NodoEnt * PilaEnt::popElem() {
	NodoEnt * aux = NULL;
	
	if (esVacio()) {
		cout << "Esta vacio" << endl;
	}
	else {
		longitud--;
		aux = tope;
		tope = tope->getSig();
	}
	return aux;
}

void PilaEnt::show(void)
{
	std::cout << "Esta seguro?" << std::endl;
}

void PilaEnt::setLongitud(int l) {
	longitud = l;
}
void PilaEnt::setTope(NodoEnt* nodo) {
	tope = nodo;
}
PilaEnt::~PilaEnt(void) {
	NodoEnt * aux;
	if (!(this->esVacio())) {
		for (aux = tope; aux != NULL; aux = tope) {
			tope = tope->getSig();
			delete aux;
			longitud--;
		}
		cout << "Pila destruida." << endl;
	}
	else {
		cout << "La pila ya está vacía." << endl;
	}
}
bool PilaEnt::esVacio() {
	if (getLongitud() == 0) {
		return true;
	}
	else {
		return false;
	}
}
