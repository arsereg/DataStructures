#pragma once

#ifndef PILAENT_H
#define PILAENT_H
#include <iostream>
#include "NodoEnt.h"

using namespace std;

class PilaEnt {
public:
	PilaEnt(void);   // constructora
	int getLongitud(void);   //analizadora
	bool pushElem(int e);          //analizadora
	NodoEnt* getTope(void);   //Modificadora
	void setLongitud(int l);  // Modificadora
	void setTope(NodoEnt *);  //Modificadora
	~PilaEnt(void);           //Destructora
	bool esVacio(void);
	NodoEnt * popElem(void);
	void show(void);

private:
	int longitud;  //longitud de la pila
	NodoEnt* tope; // puntero al tope de la pila
};
#endif /* PILAENT_H */