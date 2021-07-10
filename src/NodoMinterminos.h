#ifndef NODOMINTERMINO_H
#define NODOMINTERMINO_H
#include "Mintermino.h"

class NodoMinterminos {
    Mintermino *mintermino;
    NodoMinterminos *siguiente;
    public:
        NodoMinterminos(Mintermino *m) { mintermino = m; siguiente = nullptr; };
        ~NodoMinterminos() { delete mintermino; delete siguiente; };
        NodoMinterminos *getSiguiente() { return siguiente; };
        Mintermino * getMintermino() { return mintermino; };
        void setSiguiente(NodoMinterminos *s) { siguiente = s; };
        void setMintermino(Mintermino *m) { mintermino = m; };
};

#endif