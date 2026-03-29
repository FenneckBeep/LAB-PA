#pragma once
#include "DTRefer.h"

class Investigador;

class Publicacion {
    private:
        string DOI;
        string titulo;
        DTFecha fecha;
        set<Investigador*> autores;
    public:
        Publicacion(string DOI, string titulo, DTFecha fecha);
        virtual ~Publicacion();
        void agregarAutor(Investigador* i);
        DTRefer getDT();
        string getDOI();
        DTFecha getFecha();
        virtual bool contienePalabra(string palabra) = 0;
};