#include "DTFecha.h"
#include <sstream>

DTFecha::DTFecha() {
    Dia = 0;
    Mes = 0;
    Anio = 0;
};

DTFecha::DTFecha(int dia, int mes, int anio) {
    Dia = dia;
    Mes = mes;
    Anio = anio;
}

int DTFecha::getDia() const{
    return this->Dia;
}

int DTFecha::getMes() const{
    return this->Mes;
}

int DTFecha::getAnio() const{
    return this->Anio;
}

string DTFecha::toString() const{
    stringstream ss;
    ss << Dia << "/" << Mes << "/" << Anio;
    return ss.str();
}