# Argumentación de conceptos de Programación Orientada a Objetos

## Herencia

La herencia se aplica cuando la clase `OllamaModelo` hereda de la clase `ModeloIA`.

```cpp
class OllamaModelo : public ModeloIA
```

Esto permite que `OllamaModelo` reutilice la estructura general de `ModeloIA` y defina su propia forma de generar respuestas.

## Modificadores de acceso

Se utilizaron modificadores como `private`, `protected` y `public`.

Los atributos como `nombre`, `contenido` y `urlApi` se declararon como `private` para proteger la información interna de las clases.

El atributo `nombreModelo` se declaró como `protected` para que pueda ser utilizado por las clases hijas.

## Sobrecarga de métodos

La sobrecarga se aplica en la clase `Mensaje` con los métodos `mostrarMensaje()`.

```cpp
void mostrarMensaje();
void mostrarMensaje(bool mostrarAutor);
```

Ambos métodos tienen el mismo nombre, pero reciben diferentes parámetros.

## Sobreescritura de métodos

La sobreescritura se aplica cuando `OllamaModelo` redefine el método `generarRespuesta()` que viene de la clase `ModeloIA`.

```cpp
string generarRespuesta(string prompt) override;
```

## Polimorfismo

El polimorfismo se aplica en la clase `Chatbot`, ya que utiliza un puntero de tipo `ModeloIA`.

```cpp
ModeloIA* modelo;
```

Aunque el tipo declarado es `ModeloIA`, el objeto real puede ser `OllamaModelo`.

## Clase abstracta

La clase `ModeloIA` es abstracta porque contiene un método virtual puro.

```cpp
virtual string generarRespuesta(string prompt) = 0;
```

Esto obliga a que las clases hijas implementen su propia versión del método.

## Validación de entradas

La clase `Validador` revisa que el usuario no escriba mensajes vacíos o únicamente espacios. También permite detectar el comando `salir` para terminar el programa correctamente.
