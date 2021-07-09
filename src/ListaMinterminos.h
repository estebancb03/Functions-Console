#ifndef LISTAMINTERMINOS_H
#define LISTAMINTERMINOS_H
#include "NodoMinterminos.h"

class ListaMinterminos {
    NodoMinterminos *cabeza;
    bool valorVerad;
    public:
        ListaMinterminos() { valorVerad = true; cabeza = nullptr; };
        ~ListaMinterminos() { delete cabeza; };
        void agregarMintermino(Mintermino *m);
        bool getValorVerdad() { return valorVerad; };
        void imprimirLista();
        int longitud();
};

#endif 