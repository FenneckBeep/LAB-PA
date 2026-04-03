#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H
#include "Publicacion.h"
#include <string>
using namespace std;

class ArticuloRevista : public Publicacion {

private:
    string revista;
    string extracto;

public:
    ArticuloRevista(string DOI, string titulo, DTFecha fecha,
                    string revista, string extracto);

    ~ArticuloRevista();

    string getRevista();
    string getExtracto();

    //Metodo
    bool contienePalabra(string palabra) override;
};

#endif