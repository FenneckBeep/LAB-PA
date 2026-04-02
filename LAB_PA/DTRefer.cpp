#include "DTRefer.h"

DTRefer::DTRefer() {
}

DTRefer::DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores) {
    this->DOI = DOI;
    this->titulo = titulo;
    this->fecha = fecha;
    this->autores = autores;
}

string DTRefer::getDOI() const {
    return this->DOI;
};

string DTRefer::getTitulo() const {
    return this->titulo;
};

DTFecha DTRefer::getFecha() const {
    return this->fecha;
};
set<string> DTRefer::getAutores() const {
    return this->autores;
};

ostream& operator<<(ostream& os, const DTRefer& dt) {
    DTFecha f = dt.getFecha();
    os << dt.getDOI() << "->" << dt.getTitulo()
       << "(" << f.getDia() << "/" << f.getMes() << "/" << f.getAnio() << ")/";

    bool primero = true;
    for (string autor : dt.getAutores()) {
        if (!primero)
            os << ",";
        os << autor;
        primero = false;
    }

    return os;
}