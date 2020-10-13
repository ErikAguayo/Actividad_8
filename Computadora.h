#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>

using namespace std;



class Computadora 
{
    string sistema;
    string nombre;
    int ram;
    int discoduro;
public:
	
    Computadora();
    
    Computadora(const string &sistema, const string &nombre, int ram, int discoduro);
    
	void setSistema(const string &o);
    string getSistema();
    
	void setNombre(const string &o);
    string getNombre();
   
    void setRam(float o);
    int getRam();
    
    void setDiscoduro(int o);
    int getDiscoduro();

};

#endif
