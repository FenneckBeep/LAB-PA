#include "Libro.h"
#include <sstream>

using namespace std;

Libro::Libro(string id, string titulo, DTFecha fecha, string editorial, set<string> palabrasDestacadas)
    : Publicacion(id, titulo, fecha), 
      editorial(editorial), 
      palabrasDestacadas(palabrasDestacadas) {}

string Libro::getEditorial()  {
    return editorial;
}

set<string> Libro::getPalabrasDestacadas()  {
    return palabrasDestacadas;
}


bool Libro::contienePalabra(string palabra)  {
    for(string keyword: palabrasDestacadas) {
        if (keyword == palabra)
            return true;
    }
    return false;
}

// toString
// string Libro::toString()  {
//     stringstream ss;
//     ss << "Libro: " << getTitulo() << "\n"
//        << "DOI: " << getDOI() << "\n"
//        << "Fecha: " << getFecha().toString() << "\n"
//        << "Editorial: " << editorial << "\n"
//        << "Palabras destacadas: ";
//
//     if (palabrasDestacadas.empty()) {
//         ss << "Ninguna";
//     } else {
//         bool first = true;
//         for (const auto& p : palabrasDestacadas) {
//             if (!first) ss << ", ";
//             ss << p;
//             first = false;
//         }
//     }
    
//     return ss.str();
// }
