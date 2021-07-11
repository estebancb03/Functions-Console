#include <iostream>
#include "Variable.h"
using namespace std;

bool Variable :: evaluar() {
    if(formula.find("'") != string :: npos) 
        setValorVerdad(!getValorVerdad());
    return getValorVerdad();
}