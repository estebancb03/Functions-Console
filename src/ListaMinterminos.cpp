#include <iostream>
#include "ListaMinterminos.h"
using namespace std;

void ListaMinterminos :: agregarMintermino(Mintermino *m) {
    NodoMinterminos *temp = cabeza;
    NodoMinterminos *nuevo = new NodoMinterminos(m);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}

void ListaMinterminos :: imprimirLista() {
    NodoMinterminos *temp = cabeza;
    if(temp == nullptr)
        cout << "Lista vacia";
    else {
        while(temp != nullptr) {
            cout << temp -> getMintermino() -> getFormula() << "->";
            temp = temp -> getSiguiente();
        }
        cout << "NULL";
    }
}

int ListaMinterminos :: longitud() {
    int cont = 0;
    NodoMinterminos *temp = cabeza;
    while(temp != nullptr) {
        cont++;
        temp = temp -> getSiguiente();
    }
        return cont;
}