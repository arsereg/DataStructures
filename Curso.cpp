#include "stdafx.h"
#include "Curso.h"


Curso::Curso(string codigo, string nom, int room, Jornada hora, Dias dia)
{
	codigoCurso = codigo;
	nombre = nom;
	aula = room;
	horario = hora;
	diaSemana = dia;
}

string Curso::getCodigo()
{
	return codigoCurso;
}

string Curso::getNombre()
{
	return nombre;
}

int Curso::getAula()
{
	return aula;
}

ListaEstudiante Curso::getListaEstudiantes()
{
	return listaEstudiantes;
}

string Curso::getHorario()
{


	string jornada = "";
	switch (horario) {
	case dia:   jornada = "Dia, ";   break;
	case tarde: jornada = "Tarde, "; break;
	case noche: jornada = "Noche, "; break;
	default:    jornada = "Error";
	}
	string diaDeSemana = "";
	switch (diaSemana) {
	case  lunes: diaDeSemana = "Lunes"; break;
	case martes: diaDeSemana = "Martes"; break;
	case miercoles: diaDeSemana = "Miercoles"; break;
	case jueves: diaDeSemana = "Jueves"; break;
	case viernes: diaDeSemana = "Viernes"; break;
	default: diaDeSemana = "Error";
	}
	return jornada + diaDeSemana;
}


Curso::~Curso()
{
}
