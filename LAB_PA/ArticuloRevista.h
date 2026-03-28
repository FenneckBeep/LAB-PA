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

            bool contienePalabra(string palabra) override;
            // "override": reemplaza el método del padre (Mejor funcionamiento)”
};

#endif