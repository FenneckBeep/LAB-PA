#include "ArticuloRevista.h"
#include <algorithm>
#include <cctype>

// Algoritmo pa las mayusculas Mejorado
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Constructor
ArticuloRevista::ArticuloRevista(string doi, string titulo, DTFecha fecha,
                                 string revista, string extracto)
    : Publicacion(doi, titulo, fecha) {

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
    string ext = toLower(extracto);
    string pal = toLower(palabra);

    return ext.find(pal) != string::npos;
}

//texto: La vida de un critico es sencilla en muchos aspectos
//contienePalabra("vida") → true  
//contienePalabra("hola") → false