#include "Validador.h"

bool Validador::validarTexto(string texto) {
    if (texto.empty()) {
        return false;
    }

    for (char c : texto) {
        if (c != ' ') {
            return true;
        }
    }

    return false;
}

bool Validador::esComandoSalir(string texto) {
    return texto == "salir" || texto == "SALIR" || texto == "Salir";
}
