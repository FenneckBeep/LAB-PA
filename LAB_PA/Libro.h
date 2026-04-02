#ifndef LIBRO_H
#define LIBRO_H

#include "Publicacion.h"
#include <set>
#include <string>

using namespace std;

class Libro : public Publicacion {
private:
    string editorial;
    set<string> palabrasDestacadas;

public:
    Libro(string id, string titulo, DTFecha fecha, string editorial, set<string> palabrasDestacadas = {});

    string getEditorial();
    set<string> getPalabrasDestacadas();  

    bool contienePalabra(string palabra);

    //string toString();
};

#endif 
