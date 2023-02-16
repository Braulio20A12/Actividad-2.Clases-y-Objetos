#ifndef NODOFLOAT_H
#define NODOFLOAT_H

class NodoFloat
{
public:
    NodoFloat();
    NodoFloat(float, NodoFloat*);

    float val;
    NodoFloat *nex;
};
#endif
