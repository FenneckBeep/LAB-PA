#ifndef DTFECHA_H
#define DTFECHA_H

#include <string>
using namespace std;

class DTFecha {
private:
    int Dia;
    int Mes;
    int Anio;
public:
    DTFecha();
    DTFecha(int dia, int mes, int anio);
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    string toString() const;
};

#endif