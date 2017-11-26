#pragma once
#ifndef NODOCURSOS_H
#define NODOCURSOS_H
#include "Curso.h"
class NodoCursos
{
public:
	Curso * info;
	NodoCursos * sig;
	NodoCursos(Curso * e);
	~NodoCursos();
	NodoCursos * getSig();
	Curso * getInfo();
	void setInfo(Curso *);
	void setSig(NodoCursos *);
	
private:
	
};

#endif