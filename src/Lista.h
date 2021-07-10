#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
template <class T>

class Lista {
    Nodo<T> *cabeza;
    public:
        Lista() { cabeza = nullptr; };
        ~Lista() { delete cabeza; };
        void agregarObjeto(T o, bool v);
        void agregarObjeto(T *o, bool v);
        Nodo<T> *getNodo(string s);
        Nodo<T> *getNodoV(string s);
        bool encontrar(string s);
        void imprimirLista();
        int longitud();
};

#endif 