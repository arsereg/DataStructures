#pragma once
#ifndef Lista_H
#include <iostream>
#include "NodoEnt.h"
class Lista
{
public:
	Lista();
	int getLongitud(void);   //analizadora
	bool add(int e);          //analizadora
	NodoEnt* getTope(void);   //Modificadora
	void setLongitud(int l);  // Modificadora
	void setTope(NodoEnt *);  //Modificadora
	bool esVacio(void);
	~Lista();
	NodoEnt * getLast();
	void agregarOrdenado(int);
	void show();

private:
	int longitud;  //longitud de la pila
	NodoEnt* tope; // puntero al tope de la pila
};



;
#endif /* PILAENT_H */