#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

class Lista {
    Nodo *cabeza;
    public:
        Lista() { cabeza = nullptr; };
        ~Lista() { delete cabeza; };
        void agregarMintermino(Mintermino *m);
        void imprimirLista();
};

#endif 