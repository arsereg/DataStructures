#pragma once
#include "Estudiante.h"
#ifndef NODOCURSO_H
#define NODOCURSO_H

class NodoCurso {
public:
	Estudiante * info;
	NodoCurso * sig;
	NodoCurso(Estudiante * x);
	void setInfo(Estudiante * x);
	Estudiante * getInfo(void);
	void setSig(NodoCurso * x);
	NodoCurso * getSig(void);

private:
	
};
#endif /* NodoCurso_H */
