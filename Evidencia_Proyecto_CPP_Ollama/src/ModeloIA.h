#ifndef MODELOIA_H
#define MODELOIA_H

#include <string>
using namespace std;

class ModeloIA {
protected:
    string nombreModelo;

public:
    ModeloIA(string nombreModelo) {
        this->nombreModelo = nombreModelo;
    }

    virtual string generarRespuesta(string prompt) = 0;

    string getNombreModelo() {
        return nombreModelo;
    }

    virtual ~ModeloIA() {}
};

#endif
