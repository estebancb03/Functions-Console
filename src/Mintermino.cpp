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

void Mintermino :: evaluar() {
    bool valoresIntroducidos[3] = { introducidoA, introducidoB, introducidoC };
    bool valoresDeterminados[longitud()] = { introducidoA, introducidoB, introducidoC };
    int cont = 0;
    for(int i = 0; i < formulaMintermino.length(); i++) {
        if(!isalpha(formulaMintermino[i])) {
            cont++;
            if(valoresDeterminados[i - cont] == true)
                valoresDeterminados[i - cont] = false;
            else
                valoresDeterminados[i - cont] = true;
        }
    }
    int j = 0;
    while(j < 3) {
        if(valoresDeterminados[j] == false)
            setValorVerdad(false); 
        j++;
    }
}