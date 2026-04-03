#include "ArticuloRevista.h"
#include <cctype>

// Constructor
ArticuloRevista::ArticuloRevista(string DOI, string titulo, DTFecha fecha,
                                 string revista, string extracto)
    : Publicacion(DOI, titulo, fecha) {

    this->revista = revista;
    this->extracto = extracto;
}

// Destructor
ArticuloRevista::~ArticuloRevista() {
}

// Getters
string ArticuloRevista::getRevista() {
    return revista;
}

string ArticuloRevista::getExtracto() {
    return extracto;
}

// Metodo
bool ArticuloRevista::contienePalabra(string palabra) {
    return extracto.find(palabra) != string::npos;
}