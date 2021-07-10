#include <iostream>
#include "ListaVariables.h"
#include <string.h>
using namespace std;

void ListaVariables :: agregarVariable(Variable *v) {
    NodoVariables *temp = cabeza;
    NodoVariables *nuevo = new NodoVariables(v);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}


int ListaVariables :: longitud() {
    int cont = 0;
    NodoVariables *temp = cabeza;
    while(temp != nullptr) {
        cont++;
        temp = temp -> getSiguiente();
    }
    return cont;
}

bool ListaVariables :: encontrar(string s) {
    bool encontrado = false;
    NodoVariables *temp = cabeza;
    while(encontrado == false && temp != nullptr) {
        if(temp -> getVariable() -> getLetra().find(s) != string :: npos)
            encontrado = true;
        temp = temp -> getSiguiente();
    }
    return encontrado;
}

void ListaVariables :: imprimirLista() {
    NodoVariables *temp = cabeza;
    if(temp == nullptr)
        cout << "Lista vacia";
    else {
        while(temp != nullptr) {
            cout << temp -> getVariable() -> getValorVerdad() << "->";
            temp = temp -> getSiguiente();
        }
        cout << "NULL";
    }
}

NodoVariables* ListaVariables :: getVariableNodo(string s) {
    NodoVariables *temp = cabeza;
    while(temp -> getSiguiente() != nullptr && temp -> getVariable() -> getLetra().find(s) == string :: npos) {
        temp = temp -> getSiguiente();
    }
    return temp;
}
