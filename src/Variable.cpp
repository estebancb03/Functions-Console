#include <iostream>
#include "Variable.h"
using namespace std;

bool Variable :: evaluar() {
    if(letra.find("'") != string :: npos) 
        setValorVerdad(!getValorVerdad());
    return getValorVerdad();
}