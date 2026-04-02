#include <iostream>
#include <set>
#include <string>
#include "Investigador.h"
#include "Libro.h"
#include "ArticuloRevista.h"
#include "PaginaWeb.h"
#include "DTFecha.h"

int main() {

    // fijarme si tengo que definir un set 

    DTFecha f1(15, 5, 2023);
    DTFecha f2(10, 2, 2024);
    DTFecha f3(20, 8, 2022);
    DTFecha f4(20, 10, 2024);

    ArticuloRevista* a1 = new ArticuloRevista(  
        "10.1234/abc123","Fundamentos de POO",f1, "Programacion Avanzada", 
        "Introduccion a los principios fundamentales de la programacion"
        "orientada a objetos, explicando sus conceptos clave como clases,"
        "objetos, herencia y polimorfismo.");

    ArticuloRevista* a2 = new ArticuloRevista(  
        "10.4567/jk1012","Utilidad de diagramas UML", f2, "Modelado de Software",
        "Ejercicio empirico de como los diagramas UML pueden ayudar en el"
        "proceso y documentacion de software, cubriendo los tipos mas"
        "importantes utilizados, como clases.");


    set<string> keywords1 = {"Diseno","OOP","Class"}; 
    set<string> keywords2 = {"Diagramas", "UML", "Software", "Modelado"};


    Libro* l1 = new Libro("10.2345/def456","Patrones de Diseno en c++",f3, "Software Design",keywords1);
    Libro* l2 = new Libro("10.5678/mno345", "Guia de UML",f3,"IEEE",keywords2);

    PaginaWeb* p1 = new PaginaWeb(
        "10.3456/ghi789","Diagramas para Principiantes",f4, "www.umlparaprincipiantes.com",
        "En esta pagina web se presenta una gui completa sobre los"
        "diagramas UML, abordando los diagramas de casos de uso,"
        "de clases, de secuencia y de actividades.");

    cout << "Punto d: Imprimir DTRefer de publicaciones" << endl << endl;
    cout << a1->getDT() << endl;
    cout << a2->getDT() << endl;
    cout << l1->getDT() << endl;
    cout << l2->getDT() << endl;
    cout << p1->getDT() << endl;

    cout << endl;

    Investigador* inv1 = new Investigador("0000-0003-1234-5678", "Carla Oliveri", "Universidad de la Republica");
    Investigador* inv2 = new Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico");

    cout << "Punto f: Imprimir toString de cada Investigador" << endl << endl;

    cout << inv1->toString() << endl;
    cout << inv2->toString() << endl;

    cout << endl;

    inv1->agregarPublicacion(a1);
    inv1->agregarPublicacion(a2); 
    inv1->agregarPublicacion(l2);
    inv1->agregarPublicacion(p1);
    inv2->agregarPublicacion(a1);
    inv2->agregarPublicacion(a2);
    inv2->agregarPublicacion(l1);  
    
    a1->agregarAutor(inv1);
    a2->agregarAutor(inv1);
    l2->agregarAutor(inv1);
    p1->agregarAutor(inv1);
    a1->agregarAutor(inv2);
    a2->agregarAutor(inv2);
    l1->agregarAutor(inv2);

    cout << "Punto h: Imprimir listarPublicaciones de Carla Oliveri" << endl << endl;
    //diagramas para principiantes, utilidad de diagramas uml

    DTFecha f5(10, 12, 2023);
    set<string> resultado = inv1->listarPublicaciones(f5,"UML");

    for (string s: resultado){
        cout << s << endl;
    }

    cout << endl;

    //comprobar "Parece que esta bien"
    delete a2;
    a2 = NULL;

    cout << "Punto j: Listar publicaciones de nuevo" << endl << endl;
    //Diagramas para principiantes, Guia UML

    DTFecha f6(1, 1, 2020);    
    set<string> resultado2 = inv1->listarPublicaciones(f6,"UML");

    for (string s: resultado2){
        cout << s << endl;
    }

    cout << endl;

    cout << "Punto k: Imprimir DTRefer de publicaciones" << endl << endl;

    cout << a1->getDT() << endl;
    cout << l1->getDT() << endl;
    cout << l2->getDT() << endl;
    cout << p1->getDT() << endl;

    return 0;
}
