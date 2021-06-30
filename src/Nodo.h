#ifndef NODO_H
#define NODO_H
#include "Mintermino.h"

class Nodo {
    Mintermino *mintermino;
    Nodo *siguiente;
    public:
        Nodo(Mintermino *m) { mintermino = m; siguiente = nullptr; };
        ~Nodo() { delete mintermino; delete siguiente; };
        Nodo *getSiguiente() { return siguiente; };
        Mintermino * getMintermino() { return mintermino; };
        void setSiguiente(Nodo *s) { siguiente = s; };
        void setMintermino(Mintermino *m) { mintermino = m; };
};

#endif