#include "PaginaWeb.h"
#include <algorithm>
#include <cctype>

// Algoritmo pa las mayusculas 
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Constructor
PaginaWeb::PaginaWeb(string doi, string titulo, DTFecha fecha,
                     string url, string contenidoExtraido)
    : Publicacion(doi, titulo, fecha) {

    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
}

// Destructor
PaginaWeb::~PaginaWeb() {
}

// Getters
string PaginaWeb::getUrl() {
    return url;
}

string PaginaWeb::getContenidoExtraido() {
    return contenidoExtraido;
}

// Metodo
bool PaginaWeb::contienePalabra(string palabra) {
    string ext = toLower(contenidoExtraido); 
    string pal = toLower(palabra);

    return ext.find(pal) != string::npos;
}