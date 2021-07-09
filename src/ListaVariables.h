#ifndef LISTAVARIABLES_H
#define LISTAVARIABLES_H
#include "NodoVariables.h"

class ListaVariables {
    NodoVariables *cabeza;
    public:
        ListaVariables() { cabeza = nullptr; };
        ~ListaVariables() { delete cabeza; };
        void agregarVariable(string v, bool vv);
        NodoVariables* getVariableNodo(string s);
        void imprimirLista();
        bool encontrar(string v);
        int longitud();
};

#endif 