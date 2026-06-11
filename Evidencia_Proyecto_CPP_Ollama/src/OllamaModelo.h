#ifndef OLLAMAMODELO_H
#define OLLAMAMODELO_H

#include "ModeloIA.h"
#include <string>
using namespace std;

class OllamaModelo : public ModeloIA {
private:
    string urlApi;

public:
    OllamaModelo(string nombreModelo, string urlApi);

    string generarRespuesta(string prompt) override;

    string getUrlApi();
};

#endif
