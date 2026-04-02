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
    set<string> nombres;

    for (Investigador* i : autores)
        nombres.insert(i->getNombre());
    
    DTRefer dt = DTRefer(this->DOI, this->titulo, this->fecha, nombres);

    return dt;
}

string Publicacion::getDOI() {
    return this->DOI;
}
        
DTFecha Publicacion::getFecha() {
    return this->fecha;
}