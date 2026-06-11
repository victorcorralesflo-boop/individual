# Argumentación del diseño UML

El sistema fue diseñado separando las responsabilidades principales en diferentes clases. La clase `Usuario` representa a la persona que utiliza el programa. La clase `Mensaje` permite almacenar los textos enviados durante la conversación. La clase `Chatbot` controla el flujo de interacción entre el usuario y el modelo de inteligencia artificial.

La clase `ModeloIA` se diseñó como una clase abstracta, ya que representa el comportamiento general que debe tener cualquier modelo de inteligencia artificial. La clase `OllamaModelo` hereda de `ModeloIA` e implementa el método `generarRespuesta()`, adaptándolo al funcionamiento esperado con Ollama.

Este diseño permite aplicar herencia y polimorfismo, ya que `Chatbot` trabaja con un puntero de tipo `ModeloIA`, pero puede recibir un objeto de tipo `OllamaModelo`. Esto permite que el programa sea flexible y que en el futuro se puedan agregar otros modelos de inteligencia artificial sin modificar completamente el sistema.

También se agregó la clase `Validador` para verificar que las entradas del usuario sean correctas, evitando mensajes vacíos o comandos inválidos.
