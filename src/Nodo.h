#ifndef NODO_H
#define NODO_H
#include "Mintermino.h"
template <class T>

class Nodo {
    T objeto;
    bool valorVerdad;
    Nodo<T> *siguiente;
    public:
        Nodo(T o, bool vv) { objeto = o; valorVerdad = vv; siguiente = nullptr; };
        ~Nodo() { delete objeto; delete siguiente; };
        Nodo<T>* getSiguiente() { return siguiente; };
        T getObj() { return objeto; };
        bool getValorVerdad() { return valorVerdad; };
        void setSiguiente(Nodo<T> * s) { siguiente = s; };
        void setObj(T o) { objeto = o; };
        void setValorVerdad(bool vv) { valorVerdad = vv; };
};

#endif