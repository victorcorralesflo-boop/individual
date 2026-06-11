#include "Mensaje.h"
#include <iostream>
using namespace std;

Mensaje::Mensaje() {
    contenido = "";
    autor = "";
}

Mensaje::Mensaje(string contenido, string autor) {
    this->contenido = contenido;
    this->autor = autor;
}

string Mensaje::getContenido() {
    return contenido;
}

string Mensaje::getAutor() {
    return autor;
}

void Mensaje::mostrarMensaje() {
    cout << contenido << endl;
}

void Mensaje::mostrarMensaje(bool mostrarAutor) {
    if (mostrarAutor) {
        cout << autor << ": " << contenido << endl;
    } else {
        cout << contenido << endl;
    }
}
