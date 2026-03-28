#include "ArticuloRevista.h"

//Constructora
ArticuloRevista::ArticuloRevista(string doi, string titulo, DTFecha fecha,
                                 string revista, string extracto)
    : Publicacion(doi, titulo, fecha) {

    this->revista = revista;
    this->extracto = extracto;
}

//Metodo
bool ArticuloRevista::contienePalabra(string palabra) {
    return extracto.find(palabra) != string::npos;
}

// texto: La vida de un critico es sencilla en muchos aspectos
//contienePalabra("vida") → true  
//contienePalabra("hola") → false