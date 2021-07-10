#include <iostream>
#include "Lista.h"
using namespace std;

template <class T>
void Lista<T> :: agregarObjeto(T o, bool v) {
    Nodo<T> *temp = cabeza;
    Nodo<T> *nuevo = new Nodo<T>(o, v);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}

template <class T>
void Lista<T> :: agregarObjeto(T *o, bool v) {
    Nodo<T> *temp = cabeza;
    Nodo<T> *nuevo = new Nodo<T>(o, v);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}

template <class T>
void Lista<T> :: imprimirLista() {
    Nodo<T> *temp = cabeza;
    if(temp == nullptr)
        cout << "Lista vacia";
    else {
        while(temp != nullptr) {
            cout << temp -> getObj() << "->";
            temp = temp -> getSiguiente();
        }
        cout << "NULL";
    }
}

template <class T>
int Lista<T> :: longitud() {
    int cont = 0;
    Nodo<T> *temp = cabeza;
    while(temp != nullptr) {
        cont++;
        temp = temp -> getSiguiente();
    }
        return cont;
}

template <class T>
Nodo<T>* Lista<T> :: getNodo(string s) {
    Nodo<T> *temp = cabeza;
    while(temp -> getSiguiente() != nullptr && temp -> getMintermino() -> getFormula().find(s) == string :: npos) {
        temp = temp -> getSiguiente();
    }
    return temp;
}

template <class T>
Nodo<T>* Lista<T> :: getNodoV(string s) {
    Nodo<T> *temp = cabeza;
    while(temp -> getSiguiente() != nullptr && temp -> getVariable().find(s) == string :: npos) {
        temp = temp -> getSiguiente();
    }
    return temp;
}

template <class T>
bool Lista<T> :: encontrar(string s) {
    bool encontrado = false;
    Nodo<T> *temp = cabeza;
    while(encontrado == false && temp != nullptr) {
        if(temp -> getVariable().find(s) != string :: npos)
            encontrado = true;
        temp = temp -> getSiguiente();
    }
    return encontrado;
}