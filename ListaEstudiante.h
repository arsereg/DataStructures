#pragma once
#ifndef ListaEstudiante_H
#include <iostream>
#include "NodoEstudiantes.h"
class ListaEstudiante
{
public:
	ListaEstudiante();
	int getLongitud(void);   //analizadora
	void add(Estudiante * e);          //analizadora
	NodoEstudiantes* getTope(void);   //Modificadora
	void setLongitud(int l);  // Modificadora
	void setTope(NodoEstudiantes *);  //Modificadora
	~ListaEstudiante();
	NodoEstudiantes * getLast();
	NodoEstudiantes* tope; // puntero al tope de la pila
	int longitud;  //longitud de la pila
private:


};



;
#endif /* PILAENT_H */