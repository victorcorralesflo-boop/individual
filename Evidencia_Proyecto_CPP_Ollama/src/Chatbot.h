#ifndef CHATBOT_H
#define CHATBOT_H

#include "ModeloIA.h"
#include "Mensaje.h"
#include <vector>
#include <string>
using namespace std;

class Chatbot {
private:
    ModeloIA* modelo;
    vector<Mensaje> historial;

public:
    Chatbot(ModeloIA* modelo);

    string enviarMensaje(string mensajeUsuario);
    void agregarMensaje(Mensaje mensaje);
    void mostrarHistorial();
};

#endif
