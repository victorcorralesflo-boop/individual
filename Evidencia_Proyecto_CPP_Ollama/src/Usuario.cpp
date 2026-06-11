#include "Usuario.h"

Usuario::Usuario() {
    nombre = "Usuario";
}

Usuario::Usuario(string nombre) {
    this->nombre = nombre;
}

void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}

string Usuario::getNombre() {
    return nombre;
}
