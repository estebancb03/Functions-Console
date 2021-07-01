#include <iostream>
#include "Lista.h"
using namespace std;

void Lista :: agregarMintermino(Mintermino *m) {
    Nodo *temp = cabeza;
    Nodo *nuevo = new Nodo(m);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}

void Lista :: imprimirLista() {
    Nodo *temp = cabeza;
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

int Lista :: longitud() {
    int cont = 0;
    Nodo *temp = cabeza;
    while(temp != nullptr) {
        cont++;
        temp = temp -> getSiguiente();
    }
        return cont;
}

void Lista :: getValoresVerdad(bool arrayVerdades[]) {
    int i = 0;
    Nodo *temp = cabeza;
    while(temp != nullptr) {
        arrayVerdades[i] = temp -> getMintermino() -> getValorVerdad();  
        temp = temp -> getSiguiente();
        i++;
    }
}