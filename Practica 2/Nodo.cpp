#include "Nodo.h"

Nodo::Nodo()
{
    dato=0;
    sig=nullptr; //Constructor
}

Nodo::Nodo(int dato, Nodo *sig)
{
    this->dato=dato;
    this->sig=sig;
}
