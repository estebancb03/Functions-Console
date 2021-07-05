#include <iostream>
#include "ListaVariables.h"
#include <string.h>
using namespace std;

void ListaVariables :: agregarVariable(string v, bool vv) {
    NodoVariables *temp = cabeza;
    NodoVariables *nuevo = new NodoVariables(v, vv);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}

bool ListaVariables :: getValorVerdad(string v) {
    bool valor;
    NodoVariables *temp = cabeza;
    while(temp != nullptr) {
        if(temp -> getVariable().find(v) != string :: npos)
            valor = temp -> getValorVerdad();
        temp = temp -> getSiguiente();
    }
    return valor;
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
        if(temp -> getVariable().find(s) != string :: npos)
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
            cout << temp -> getValorVerdad() << "->";
            temp = temp -> getSiguiente();
        }
        cout << "NULL";
    }
}

string ListaVariables :: getVariable(string v) {
    string variable;
    NodoVariables *temp = cabeza;
    while(temp != nullptr) {
        if(temp -> getVariable().find(v) != string :: npos)
            variable = temp -> getVariable();
        temp = temp -> getSiguiente();
    }
    return variable;
}
