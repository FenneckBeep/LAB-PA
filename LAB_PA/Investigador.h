#include "DTFecha.h"
#include <set>
#include <string>
using namespace std;

class Publicacion;
class DTFecha;

class Investigador {
private:
    string ORCID;
    string nombre;
    string institucion;
    set<Publicacion*> publicaciones;

public:
    Investigador(string , string , string );
    string toString();
    set<string> listarPublicaciones(DTFecha , string );
    string getNombre();
    void agregarPublicacion(Publicacion*);
    void eliminarPublicacion(Publicacion*);
};