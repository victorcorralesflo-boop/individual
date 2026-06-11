#include "OllamaModelo.h"

OllamaModelo::OllamaModelo(string nombreModelo, string urlApi)
    : ModeloIA(nombreModelo) {
    this->urlApi = urlApi;
}

string OllamaModelo::generarRespuesta(string prompt) {
    return "Respuesta generada por " + nombreModelo + ": Recibi tu mensaje: \"" + prompt + "\"";
}

string OllamaModelo::getUrlApi() {
    return urlApi;
}
