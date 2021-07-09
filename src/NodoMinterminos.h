#ifndef NODOMINTERMINO_H
#define NODOMINTERMINO_H
#include "Mintermino.h"

class NodoMinterminos {
    Mintermino *mintermino;
    bool valorVerdad;
    NodoMinterminos *siguiente;
    public:
        NodoMinterminos(Mintermino *m) { mintermino = m; valorVerdad = true; siguiente = nullptr; };
        ~NodoMinterminos() { delete mintermino; delete siguiente; };
        NodoMinterminos *getSiguiente() { return siguiente; };
        Mintermino * getMintermino() { return mintermino; };
        bool getValorVerdad() { return valorVerdad; };
        void setSiguiente(NodoMinterminos *s) { siguiente = s; };
        void setMintermino(Mintermino *m) { mintermino = m; };
        void setValorVerdad(bool vv) { valorVerdad = vv; };
};

#endif