// Pila.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "PilaEnt.h"
#include "NodoEnt.h"
#include "Cola.h"
#include "Lista.h"

int main(int argc, char** argv) {
/*
	PilaEnt * unaPila = new PilaEnt;
	unaPila->pushElem(4);
	unaPila->pushElem(10);
	unaPila->pushElem(616);
	unaPila->pushElem(651);
	unaPila->pushElem(915);
	NodoEnt * var = unaPila->popElem();
	
	while (var != NULL)
	{
		cout << var->getInfo() << endl;
		var = unaPila->popElem();
	}
	*/

	/*
	Cola * unaCola = new Cola;
	unaCola->pushElem(4);
	unaCola->pushElem(10);
	unaCola->pushElem(616);
	unaCola->pushElem(651);
	unaCola->pushElem(915);
	NodoEnt * var = unaCola->popElem();
	var = unaCola->popElem();
	cout << var->getInfo() << endl;
	var = unaCola->popElem();
	cout << var->getInfo() << endl;
	var = unaCola->popElem();
	cout << var->getInfo() << endl;
	unaCola->show();
	*/

	Lista * unaLista = new Lista;
	unaLista->add(4);
	unaLista->add(10);
	unaLista->add(616);
	unaLista->add(651);
	unaLista->add(915);
	unaLista->agregarOrdenado(803);
	unaLista->agregarOrdenado(800);
	unaLista->agregarOrdenado(400);
	unaLista->agregarOrdenado(45);
	unaLista->show();

}
