#pragma once
#ifndef COLA_H
#include <iostream>
#include "NodoEnt.h"
class Cola
{
public:
	Cola();
	int getLongitud(void);   //analizadora
	bool pushElem(int e);          //analizadora
	NodoEnt* getTope(void);   //Modificadora
	void setLongitud(int l);  // Modificadora
	void setTope(NodoEnt *);  //Modificadora
	bool esVacio(void);
	NodoEnt * popElem(void);
	~Cola();
	NodoEnt * getLast();
	void show(void);
	
private:
	int longitud;  //longitud de la pila
	NodoEnt* tope; // puntero al tope de la pila
};



;
#endif /* PILAENT_H */