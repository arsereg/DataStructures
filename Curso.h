#pragma once
#include <string>
#include "ListaEstudiante.h"
using std::string;
#ifndef CURSO_H
#define CURSO_H

class Curso
{
public:
	enum Jornada {dia, tarde, noche};
	enum Dias {lunes, martes, miercoles, jueves, viernes, sabado, domingo};
	Curso(string codigo, string nom, int room, Jornada hora, Dias dia);

	string getCodigo();
	string getNombre();
	int getAula();
	ListaEstudiante getListaEstudiantes();
	string getHorario();
	~Curso();
private:
	string codigoCurso;
	string nombre;
	int aula;
	ListaEstudiante listaEstudiantes;
	
	Jornada horario;
	Dias diaSemana;
}
;
#endif

