#include "stdafx.h"
#include "NodoEnt.h"

#include<iostream>
#include "NodoEnt.h"

NodoEnt::NodoEnt(int x) {
	info = x;
	sig = NULL;
}
void NodoEnt::setInfo(int x) {
	info = x;
}
int NodoEnt::getInfo(void) {
	return info;
}
void NodoEnt::setSig(NodoEnt* x) {
	sig = x;
}
NodoEnt * NodoEnt::getSig(void) {
	return sig;
}


