#ifndef NEURONAFLOAT_H
#define NEURONAFLOAT_H
#include "NodoFloat.h"
#include <iostream>

using namespace std;

class NeuronaFloat
{
public:
    NeuronaFloat();
    ~NeuronaFloat();

    NeuronaFloat(NodoFloat*);
    NodoFloat *hFlo;

    void insertarInicioVoltaje(float);

    void insertarFinVoltaje(float);

    void mostrarFlo(void);
};
#endif // NEURONAFLOAT_H

