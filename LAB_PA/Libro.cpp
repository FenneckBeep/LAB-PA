#include "Libro.h"
#include <sstream>

using namespace std;

Libro::Libro(string id, string titulo, DTFecha fecha, string editorial, set<string> palabrasDestacadas)
    : Publicacion(id, titulo, fecha), 
      editorial(editorial), 
      palabrasDestacadas(palabrasDestacadas) {}

string Libro::getEditorial() const {
    return editorial;
}

set<string> Libro::getPalabrasDestacadas() const {
    return palabrasDestacadas;
}


bool Libro::contienePalabra(string palabra) const {

}

// toString
string Libro::toString() const {
    stringstream ss;
    ss << "Libro: " << getTitulo() << "\n"
       << "DOI: " << getDOI() << "\n"
       << "Fecha: " << getFecha().toString() << "\n"
       << "Editorial: " << editorial << "\n"
       << "Palabras destacadas: ";
    
    if (palabrasDestacadas.empty()) {
        ss << "Ninguna";
    } else {
        bool first = true;
        for (const auto& p : palabrasDestacadas) {
            if (!first) ss << ", ";
            ss << p;
            first = false;
        }
    }
    
    return ss.str();
}
