#include "Laboratorio.h"
#include <iostream>


Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &f)
{
    if (cont < 5) {
        arreglo[cont] = f;
        cont++;
    }
    else {
        cout << "No hay mas espacio" << endl;
    }
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < cont; i++) {
        Computadora &f = arreglo[i];
        cout << "Sistema: " << f.getSistema() << endl;
        cout << "Nombre: " << f.getNombre() << endl;
        cout << "Ram: " << f.getRam() << endl;
        cout << "Disco Duro: " << f.getDiscoduro() << endl;
        cout << endl;
    }
}
