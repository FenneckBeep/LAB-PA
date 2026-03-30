#include "Investigador.h"
#include <string>
#include "Publicacion.cpp"
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

          // arreglar la condicion de la fecha ya que gpt me dijo que esto puede fallar 
          if ( desde.anio <= p->getFecha().anio &&
               desde.mes <= p->getFecha().mes &&
               desde.dia <= p->getFecha().dia){
               
               if(p->contienePalabra(palabra)){
                    resultado.insert(p->getDOI());
               }

          }
     }

     return resultado; 
}

void Investigador::eliminarPublicacion(Publicacion*a){
     publicaciones.erase(a);
}
