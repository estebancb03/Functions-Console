#include <iostream>
#include <string.h>
#include <sstream>
#include "Mintermino.h"
using namespace std;

bool Mintermino :: evaluar() {
    string variablesPosibles = "abcd";
    string letra;
    bool determinados[variablesPosibles.length()];
    llenarListaVariables();
    estandarizar();
    cout << "Formula revisada = " << formulaMintermino << endl;
    for(int i = 0; i < variablesPosibles.length(); i++) {
        letra = variablesPosibles[i];
        determinados[i] = variables -> getNodo(letra) -> getObjeto() -> evaluar();
    }
    cout << "Valores revisados = " << determinados[0] << determinados[1] << determinados[2] << determinados[3] << endl;
    int j = 0;
    while(j < variables -> longitud()) {
        if(determinados[j] == false)
            setValorVerdad(false);
        j++;
    }
    cout << "Valor Mintermino = " << getValorVerdad() << endl << endl;
    return getValorVerdad();
}

void Mintermino :: llenarListaVariables() {
    string letra;
    for(int i = 0; i < formulaMintermino.length(); i++) {
        if(i < formulaMintermino.length() - 1 && !isalpha(formulaMintermino[i + 1])) {
            letra = "";
            letra += formulaMintermino[i];
            letra += formulaMintermino[i + 1];
            i++;
        }
        else 
            letra = formulaMintermino[i];
        variables -> agregarObjeto(new Variable(letra, introducidos[i]));
    }
}

string Mintermino :: averiguaFaltantes() {
    string variablesPosibles = "abcd";
    string variableCiclo;
    string faltantes;
    for(int i = 0; i < variablesPosibles.length(); i++) {
        variableCiclo = variablesPosibles[i];
        if(variables -> encontrar(variableCiclo) == false)
            faltantes += variableCiclo;
    }
    return faltantes;
}

void Mintermino :: estandarizar() {
    string variablesPosibles = "abcd";
    string letraRecorrido;
    string faltantes;
    string letra;
    int preLongitud = variables -> longitud();
    cout << "Formula NO revisada = " << formulaMintermino << endl;
    if(preLongitud != 4) {
        faltantes = averiguaFaltantes();
        for(int i = 0; i < faltantes.length(); i++) {
            letra =  faltantes[i];
            variables -> agregarObjeto(new Variable(letra, true));
        }
    } 
    formulaMintermino = "";
    for(int i = 0; i < variablesPosibles.length(); i++){
        letraRecorrido = variablesPosibles[i];
        formulaMintermino += variables -> getNodo(letraRecorrido) -> getObjeto() -> getFormula();
    }
}