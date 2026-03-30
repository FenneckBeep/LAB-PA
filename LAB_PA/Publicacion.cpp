#include "Publicacion.h"
#include "Investigador.h"

Publicacion::Publicacion(string DOI, string titulo, DTFecha fecha)
    : DOI(DOI), titulo(titulo), fecha(fecha) {}

Publicacion::~Publicacion() {
    for (Investigador* inv : autores)
        inv->eliminarPublicacion(this);
}

void Publicacion::agregarAutor(Investigador* i) {
    autores.insert(i);
}

DTRefer Publicacion::getDT() {
    DTRefer dt;

    dt.DOI = this->DOI;
    dt.titulo = this->titulo;
    dt.fecha = this->fecha;

    for (Investigador* i : autores)
        dt.autores.insert(i->getNombre());

    return dt;
}

string Publicacion::getDOI() {
    return this->DOI;
}
        
DTFecha Publicacion::getFecha() {
    return this->fecha;
}