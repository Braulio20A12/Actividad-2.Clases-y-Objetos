#include "NodoFloat.h"

NodoFloat::NodoFloat()
{
    val=0.0;
    nex=nullptr;
    //ctor
}

NodoFloat::NodoFloat(float val, NodoFloat *nex)
{
    this->val=val;
    this->nex=nex;
}
