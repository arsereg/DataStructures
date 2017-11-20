#pragma once
#ifndef NODOENT_H
#define NODOENT_H

class NodoEnt {
public:
	NodoEnt(int x = 0);
	NodoEnt();

	void setInfo(int x);
	int getInfo(void);
	void setSig(NodoEnt * x);
	NodoEnt * getSig(void);


private:
	int info;
	NodoEnt * sig;
};
#endif /* NODOENT_H */
