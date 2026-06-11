#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>
using namespace std;

class Mensaje {
private:
    string contenido;
    string autor;

public:
    Mensaje();
    Mensaje(string contenido, string autor);

    string getContenido();
    string getAutor();

    void mostrarMensaje();
    void mostrarMensaje(bool mostrarAutor);
};

#endif
