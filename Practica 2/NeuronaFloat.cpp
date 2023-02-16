#include "NeuronaFloat.h"

NeuronaFloat::NeuronaFloat(NodoFloat *nodoInicio)
{
    hFlo=nodoInicio;
}

NeuronaFloat::NeuronaFloat()
{
    hFlo=nullptr;
}

void NeuronaFloat::insertarFinVoltaje(float d)
{
    NodoFloat *aux=new NodoFloat(d ,nullptr);
	NodoFloat *tmp=hFlo;

if(!tmp) //
{
	hFlo=aux;
}
else
{
	while(tmp->nex!=nullptr)
	{
		tmp=tmp->nex;
	}
tmp->nex=aux;
}
}

void NeuronaFloat::insertarInicioVoltaje(float d)
{
    NodoFloat *aux=new NodoFloat(d, nullptr);
    NodoFloat *tmp=hFlo;

    aux->nex=tmp;  
    hFlo=aux;
}

void NeuronaFloat::mostrarFlo(void)
{
    NodoFloat *tmp=hFlo;

if(tmp==nullptr)
	cout<<"Lista vacia..."<<endl;
else
	while(tmp)
	{
		cout<<tmp->val<<", ";
		tmp=tmp->nex;
	}

}
