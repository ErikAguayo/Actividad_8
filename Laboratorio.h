#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "Computadora.h"
#include <iostream>

using namespace std;

class Laboratorio
{
	Computadora arreglo[5];
	size_t cont;
	public:
	Laboratorio();
	void agregarFinal(const Computadora &f);
	void mostrar();
	
};

#endif
