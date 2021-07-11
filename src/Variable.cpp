#include <iostream>
#include "Variable.h"
using namespace std;

bool Variable :: evaluar() {
    if(formula.find("'") != string :: npos) {
        if(getValorVerdad())
            setValorVerdad(false);
        else
            setValorVerdad(true);
    }
    return getValorVerdad();
}