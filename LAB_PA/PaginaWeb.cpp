#include "PaginaWeb.h"

//Constructora
PaginaWeb::PaginaWeb(string doi, string titulo, DTFecha fecha,
                     string url, string contenidoExtraido)
    : Publicacion(doi, titulo, fecha) {

    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
}

//Metodo
bool PaginaWeb::contienePalabra(string palabra) {
    return contenidoExtraido.find(palabra) != string::npos;
}