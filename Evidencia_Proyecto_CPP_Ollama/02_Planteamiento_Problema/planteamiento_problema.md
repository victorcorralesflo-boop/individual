# Planteamiento del problema

Actualmente existen herramientas de inteligencia artificial que permiten generar respuestas a partir de instrucciones dadas por el usuario. Sin embargo, muchas de estas herramientas dependen de servicios en línea o interfaces ya existentes. La situación problema consiste en diseñar e implementar una aplicación propia en C++ que permita al usuario comunicarse con un modelo de inteligencia artificial local usando Ollama.

El problema a resolver es construir un sistema que reciba mensajes del usuario, valide que las entradas sean correctas, prepare la información en un formato adecuado y permita obtener una respuesta generada por el modelo de IA.

Para resolverlo, se propone un sistema basado en programación orientada a objetos. Se identifican objetos como `Usuario`, `Mensaje`, `Chatbot`, `ModeloIA`, `OllamaModelo` y `Validador`. Cada uno tiene responsabilidades específicas dentro del sistema, permitiendo organizar mejor el código y facilitar su mantenimiento.

## Objetos involucrados

| Objeto / Clase | Características | Comportamientos |
|---|---|---|
| `Usuario` | Nombre del usuario | Guardar nombre, consultar nombre |
| `Mensaje` | Contenido y autor | Mostrar mensaje, consultar contenido |
| `Chatbot` | Modelo asociado e historial | Enviar mensajes, guardar conversación |
| `ModeloIA` | Nombre del modelo | Definir método para generar respuesta |
| `OllamaModelo` | URL local y modelo usado | Generar respuesta usando Ollama o simulación |
| `Validador` | Reglas de validación | Validar texto y comandos |
