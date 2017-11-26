#include "stdafx.h"
#include "NodoCursos.h"


NodoCursos::NodoCursos(Curso * e)
{
	setInfo(e);
}


NodoCursos::~NodoCursos()
{
}

NodoCursos * NodoCursos::getSig()
{
	return sig;
}

Curso * NodoCursos::getInfo()
{
	return info;
}

void NodoCursos::setInfo(Curso * e)
{
	info = e;
}

void NodoCursos::setSig(NodoCursos * e)
{
	sig = e;
}


