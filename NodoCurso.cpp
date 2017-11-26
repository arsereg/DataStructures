#include "stdafx.h"
#include "NodoCurso.h"

#include<iostream>
#include "NodoCurso.h"


NodoCurso::NodoCurso(Estudiante * x) {
	setInfo(x);
	sig = NULL;
}

void NodoCurso::setInfo(Estudiante * x) {
	info = x;
}
Estudiante * NodoCurso::getInfo(void) {
	return info;
}
void NodoCurso::setSig(NodoCurso* x) {
	sig = x;
}
NodoCurso * NodoCurso::getSig(void) {
	return sig;
}


