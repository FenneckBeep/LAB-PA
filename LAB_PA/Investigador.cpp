#include "Investigador.h"
#include <string>
#include "Publicacion.h"
#include "DTFecha.h"
using namespace std;


Investigador::Investigador(string _ORCID,string _nombre, string _institucion){
     this->ORCID = _ORCID;
     this->nombre = _nombre;
     this->institucion = _institucion;
}

string Investigador::toString(){
     return ORCID + "->" + nombre + "/" + institucion;
}

string Investigador::getNombre() {
    return this->nombre;
} 

void Investigador::agregarPublicacion(Publicacion* p){
     publicaciones.insert(p);
}

set<string> Investigador::listarPublicaciones(DTFecha desde, string palabra){
     set<string> resultado; 

     for (Publicacion* p : publicaciones){
          if (p->getFecha().getAnio() < desde.getAnio()) // Si el año de la publicación es menor al buscado
               continue;
          if (p->getFecha().getAnio() == desde.getAnio())
               if (p->getFecha().getMes() < desde.getMes()) // Si es el mismo año, pero el mes es menor al buscado
                    continue;
          if (p->getFecha().getAnio() == desde.getAnio())
               if (p->getFecha().getMes() == desde.getMes())
                    if (p->getFecha().getDia() < desde.getDia()) // Mismo año y mes pero el dia es menor al buscado
                         continue;
          if (p->contienePalabra(palabra))
               resultado.insert(p->getDOI());
     }
     return resultado; 
}

void Investigador::eliminarPublicacion(Publicacion*a){
     publicaciones.erase(a);
}
