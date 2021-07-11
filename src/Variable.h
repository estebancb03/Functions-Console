#ifndef VARIABLE_H
#define VARIABLE_H
#include <iostream>
using namespace std;

class Variable {
    string formula;
    bool valorVerdad;
    public:
        Variable(string f, bool vv) { formula = f; valorVerdad = vv; };
        string getFormula() { return formula; };
        bool getValorVerdad() { return valorVerdad; };
        void setFormula(string f) { formula = f; };
        void setValorVerdad(bool vv) { valorVerdad = vv; };
        bool evaluar();
};

#endif 