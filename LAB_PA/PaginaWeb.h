#ifndef PAGINAWEB_H
#define PAGINAWEB_H
#include "Publicacion.h"
#include <string>
using namespace std;

class PaginaWeb : public Publicacion{

    private:
        string url;
        string contenidoExtraido;

    public:
        PaginaWeb(string doi, string titulo, DTFecha fecha,
              string url, string contenidoExtraido);

        bool contienePalabra(string palabra) override;
};

#endif