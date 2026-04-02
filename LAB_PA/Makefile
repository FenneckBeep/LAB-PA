all: DTFecha.o DTRefer.o Investigador.o Publicacion.o PaginaWeb.o ArticuloRevista.o Libro.o main.o
	g++ DTFecha.o DTRefer.o Investigador.o Publicacion.o PaginaWeb.o ArticuloRevista.o Libro.o main.o -o lab

DTFecha.o:
	g++ -c DTFecha.cpp

DTRefer.o:
	g++ -c DTRefer.cpp

Investigador.o:
	g++ -c Investigador.cpp

Publicacion.o:
	g++ -c Publicacion.cpp

PaginaWeb.o:
	g++ -c PaginaWeb.cpp

ArticuloRevista.o:
	g++ -c ArticuloRevista.cpp

Libro.o:
	g++ -c Libro.cpp

main.o:
	g++ -c main.cpp

clean:
	rm -f *.o lab
	
run: all
	./lab