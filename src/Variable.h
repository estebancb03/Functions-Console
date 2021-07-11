#ifndef VARIABLE_H
#define VARIABLE_H
#include <iostream>
using namespace std;

class Variable {
    string formula;
    bool valorVerdad;
    public:
        Variable(string l, bool vv) { formula = l; valorVerdad = vv; };
        string getFormula() { return formula; };
        bool getValorVerdad() { return valorVerdad; };
        void setFormula(string l) { formula = l; };
        void setValorVerdad(bool vv) { valorVerdad = vv; };
        bool evaluar();
};

#endif 