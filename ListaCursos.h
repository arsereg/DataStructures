#pragma once
#ifndef ListaCursos_H
#include <iostream>
#include "NodoCursos.h"
class ListaCursos
{
public:
	ListaCursos();
	int getLongitud(void);   //analizadora
	void add(Curso * e);          //analizadora
	NodoCursos* getTope(void);   //Modificadora
	void setLongitud(int l);  // Modificadora
	void setTope(NodoCursos *);  //Modificadora
	~ListaCursos();
	NodoCursos * getLast();
	NodoCursos* tope; // puntero al tope de la pila
	int longitud;  //longitud de la pila
private:
	
	
};



;
#endif /* PILAENT_H */