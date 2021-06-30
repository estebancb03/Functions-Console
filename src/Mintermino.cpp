#include <iostream>
#include <string.h>
#include <sstream>
#include "Mintermino.h"
using namespace std;

int Mintermino :: longitud() {
    int cont = 0;
    for(int i = 0; i < f.length(); i++) {
        if(i < formulaMintermino.length() - 1 && isalpha(formulaMintermino[i + 1]))
            cont++;
        else
            i++;
    }
    return cont;
}