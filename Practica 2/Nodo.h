#ifndef NODO_H
#define NODO_H

class Nodo
{
public:
    Nodo();
    Nodo(int, Nodo*);

    int dato;
    Nodo *sig;
};
#endif
