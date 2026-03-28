#ifndef ARTICULOREVISTA_H //evita errores si el archivo se incluye varias veces
#define ARTICULOREVISTA_H
#include "Publicacion.h"
#include <string>
using namespace std;

class ArticuloRevista : public Publicacion { //Indico: ArticuloRevista es una Publicacion

private:
    string revista;
    string extracto;

public:
    ArticuloRevista(string doi, string titulo, DTFecha fecha,
                    string revista, string extracto);

    //Destructor
    ~ArticuloRevista();

    //Getters
    string getRevista();
    string getExtracto();

    //Método
    bool contienePalabra(string palabra) override;
    // Ovrride reemplaza el metodo padre (Es pa mejor funcionamiento)
}; 

#endif