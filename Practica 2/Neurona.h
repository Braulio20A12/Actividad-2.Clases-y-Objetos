#ifndef NEURONA_H
#define NEURONA_H

#include "Nodo.h"
#include <iostream>

using namespace std;

class Neurona
{
public:
    Neurona();
    Neurona(Nodo*);

    Nodo*h;

    void insertarInicioId(int);
    void insertarInicioPosx(int);
    void insertarInicioPosy(int);
    void insertarIniciored(int);
    void insertarIniciogreen(int);
    void insertarInicioblue(int);


    void insertarFinalId(int);
    void insertarFinalPosx(int);
    void insertarFinalPosy(int);
    void insertarFinalred(int);
    void insertarFinalgreen(int);
    void insertarFinalblue(int);


    void mostrarId(void);
    void mostrarPosx(void);
    void mostrarPosy(void);
    void mostrarRed(void);
    void mostrarGreen(void);
    void mostrarBlue(void);

    bool estaVacia();
};

#endif
