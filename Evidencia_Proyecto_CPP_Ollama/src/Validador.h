#ifndef VALIDADOR_H
#define VALIDADOR_H

#include <string>
using namespace std;

class Validador {
public:
    static bool validarTexto(string texto);
    static bool esComandoSalir(string texto);
};

#endif
