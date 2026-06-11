# Evidencia Individual - Proyecto C++ con Ollama

## Alumno

Víctor Manuel Corrales Flores

## Descripción del proyecto

Este proyecto consiste en una aplicación desarrollada en C++ que simula la comunicación entre un usuario y un modelo de inteligencia artificial ejecutado mediante Ollama. El sistema funciona como un chatbot en consola, donde el usuario escribe mensajes y recibe respuestas generadas por el modelo.

El proyecto fue desarrollado aplicando programación orientada a objetos, utilizando clases, objetos, herencia, polimorfismo, clases abstractas, sobrecarga, sobreescritura de métodos y validación de entradas.

## Subcompetencias evaluadas

- SICT0301. Evaluación del problema
- SICT0303. Implementación de acciones

## Estructura del repositorio

- `01_Presentacion_Proyecto`: explicación general del proyecto.
- `02_Planteamiento_Problema`: descripción del problema a resolver.
- `03_UML`: diagrama de clases y argumentación del diseño.
- `04_Ejecucion`: capturas o evidencia de funcionamiento.
- `05_POO_Argumentacion`: explicación de conceptos de POO aplicados.
- `06_Conclusion`: conclusión personal.
- `src`: archivos fuente necesarios para compilar.

## Cómo compilar

Entrar a la carpeta `src` y ejecutar:

```bash
g++ main.cpp Usuario.cpp Mensaje.cpp OllamaModelo.cpp Chatbot.cpp Validador.cpp -o chatbot
```

## Cómo ejecutar

En Linux/Mac:

```bash
./chatbot
```

En Windows:

```bash
chatbot.exe
```

## Conceptos aplicados

- Clases y objetos
- Encapsulamiento
- Herencia
- Polimorfismo
- Clase abstracta
- Sobrecarga de métodos
- Sobreescritura de métodos
- Validación de entradas

## Nota

La clase `OllamaModelo` actualmente simula la respuesta del modelo para demostrar el diseño orientado a objetos. La estructura permite reemplazar después el método `generarRespuesta()` por una conexión real a la API local de Ollama.
