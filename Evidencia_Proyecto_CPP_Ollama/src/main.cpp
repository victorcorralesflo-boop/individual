#include <iostream>
#include <string>
#include "Usuario.h"
#include "OllamaModelo.h"
#include "Chatbot.h"
#include "Validador.h"

using namespace std;

int main() {
    string nombre;
    string entrada;

    cout << "======================================" << endl;
    cout << "     Chatbot en C++ usando Ollama      " << endl;
    cout << "======================================" << endl;

    do {
        cout << "Escribe tu nombre: ";
        getline(cin, nombre);

        if (!Validador::validarTexto(nombre)) {
            cout << "El nombre no puede estar vacio." << endl;
        }

    } while (!Validador::validarTexto(nombre));

    Usuario usuario(nombre);

    OllamaModelo modelo("gemma", "http://localhost:11434/api/generate");

    Chatbot chatbot(&modelo);

    cout << endl;
    cout << "Hola " << usuario.getNombre() << "." << endl;
    cout << "Escribe un mensaje para la IA." << endl;
    cout << "Escribe 'salir' para terminar." << endl;

    do {
        cout << endl;
        cout << usuario.getNombre() << ": ";
        getline(cin, entrada);

        if (!Validador::validarTexto(entrada)) {
            cout << "No puedes enviar un mensaje vacio." << endl;
            continue;
        }

        if (Validador::esComandoSalir(entrada)) {
            cout << "Chat finalizado correctamente." << endl;
            break;
        }

        string respuesta = chatbot.enviarMensaje(entrada);

        cout << "IA: " << respuesta << endl;

    } while (true);

    chatbot.mostrarHistorial();

    return 0;
}
