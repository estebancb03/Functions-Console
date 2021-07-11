#ifndef FUNCIONBOOLEANA_H
#define FUNCIONBOOLEANA_H
#include "Lista.h"
#include "Mintermino.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class FuncionBooleana {
    Lista<Mintermino> *listaMinterminos;
    string formulaFuncion;
    bool valorVerdad;
    bool introducidos[4];
    public: 
        FuncionBooleana(string ff, bool intro[]) { formulaFuncion = ff; listaMinterminos = new Lista<Mintermino>(); memcpy(introducidos,intro, 4 * sizeof(int)); valorVerdad = false; };
        ~FuncionBooleana() { delete listaMinterminos; };
        bool getValorVerdad() { return valorVerdad; };
        string getFormula() { return formulaFuncion; };
        Lista<Mintermino> *getListaMinterminos() { return listaMinterminos; };
        void setValorVerdad(bool v) { valorVerdad = v; };
        void seleccionarMinterminos();
        void evaluar();
        void llenarValoresVerdadMinterminos(bool array[]);
};

#endif 