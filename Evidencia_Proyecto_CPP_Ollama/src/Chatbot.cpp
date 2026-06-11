#include "Chatbot.h"
#include <iostream>
using namespace std;

Chatbot::Chatbot(ModeloIA* modelo) {
    this->modelo = modelo;
}

string Chatbot::enviarMensaje(string mensajeUsuario) {
    Mensaje mensaje(mensajeUsuario, "Usuario");
    agregarMensaje(mensaje);

    string respuesta = modelo->generarRespuesta(mensajeUsuario);

    Mensaje mensajeIA(respuesta, "IA");
    agregarMensaje(mensajeIA);

    return respuesta;
}

void Chatbot::agregarMensaje(Mensaje mensaje) {
    historial.push_back(mensaje);
}

void Chatbot::mostrarHistorial() {
    cout << endl;
    cout << "----- Historial de conversacion -----" << endl;

    for (Mensaje mensaje : historial) {
        mensaje.mostrarMensaje(true);
    }

    cout << "------------------------------------" << endl;
}
