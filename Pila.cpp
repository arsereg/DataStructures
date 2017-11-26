// Pila.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Curso.h"
#include "ListaCursos.h"
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	ListaCursos * unaLista = new ListaCursos();
	Curso * unCurso = new Curso("001", "Estructuras de datos", 5, Curso::dia, Curso::lunes);
	unaLista->add(unCurso);
	unCurso = new Curso("002", "Estructuras de datos", 5, Curso::dia, Curso::martes);
	unaLista->add(unCurso);
	unCurso = new Curso("003", "Estructuras de datos", 5, Curso::dia, Curso::lunes);
	unaLista->add(unCurso);
	unCurso = new Curso("004", "Estructuras de datos", 5, Curso::noche, Curso::viernes);
	unaLista->add(unCurso);
	cout << unaLista->getLast()->getInfo()->getHorario()<< endl;
}
