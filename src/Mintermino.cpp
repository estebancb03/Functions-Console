#include <iostream>
#include <string.h>
#include <sstream>
#include "Mintermino.h"
using namespace std;

int Mintermino :: longitud() {
    int cont = 0;
    for(int i = 0; i < formulaMintermino.length(); i++) {
        if(i < formulaMintermino.length() - 1 && isalpha(formulaMintermino[i + 1]))
            cont++;
        else
            i++;
    }
    return cont;
}

void Mintermino :: cambiarValoresVerdad(bool introducidos[], bool determinados[]) {
    int longitudDeterminados = sizeof(determinados) / sizeof(determinados[0]);
    for(int i = 0; i , longitudDeterminados; i++) {
        if(introducidos[i] = false) {
            if(determinados[i] == true)
                determinados[i] = false;
            else
                determinados[i] = true;
        }
    }
}

void Mintermino :: evaluar() {
    bool valoresIntroducidos[2];
    bool valoresDeterminados[longitud()];
    valoresIntroducidos[0] = introducidoA;
    valoresIntroducidos[1] = introducidoB;
    valoresIntroducidos[2] = introducidoC;
    for(int i = 0; i < formulaMintermino.length(); i++) {
        if(i < formulaMintermino.length() - 1 && !isalpha(formulaMintermino[i + 1])) {
            valoresDeterminados[i] = false;
            i++;
        }
        else
            valoresDeterminados[i] = true;
    }
    cambiarValoresVerdad(valoresIntroducidos, valoresDeterminados);
    int j = 0;
    while(getValorVerdad() && j < sizeof(valoresDeterminados) / sizeof(valoresDeterminados[0])) {
        if(valoresDeterminados[j] == false)
            setValorVerdad(false);
        j++;
    }
}