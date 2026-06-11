#ifndef USUARIO_H
#define USUARIO_H

#include <string>
using namespace std;

class Usuario {
private:
    string nombre;

public:
    Usuario();
    Usuario(string nombre);

    void setNombre(string nombre);
    string getNombre();
};

#endif
