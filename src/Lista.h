#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>
using namespace std;
template <class T>

class Lista {
    Nodo<T> *cabeza;
    public:
        Lista() { cabeza = nullptr; };
        ~Lista() { delete cabeza; };
        void agregarObjeto(T *o);
        Nodo<T> *getNodo(string s);
        Nodo<T> *getNodoV(string s);
        bool encontrar(string s);
        void imprimirLista();
        int longitud();
};

#endif 