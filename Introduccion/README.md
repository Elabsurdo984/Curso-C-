# Módulo 1: Introducción a C++

Bienvenido al primer módulo del curso de C++. En esta sección, aprenderás sobre los conceptos básicos del lenguaje C++ y cómo configurarlo en tu máquina para comenzar a escribir y ejecutar programas.

## Qué aprenderás en este módulo

1. Qué es C++ y para qué se utiliza.
2. Instalación de un compilador de C++ en tu máquina.
3. Creación de tu primer programa en C++: "Hola Mundo".

---

### ¿Qué es C++?

C++ es un lenguaje de programación de propósito general que fue creado por Bjarne Stroustrup en 1979. Es un lenguaje muy poderoso y popular debido a su eficiencia y flexibilidad, utilizado ampliamente en sistemas operativos, videojuegos, aplicaciones embebidas, y más.

**Características principales de C++:**
- Lenguaje compilado.
- Compatible con programación orientada a objetos (OOP).
- Permite control sobre recursos del sistema (memoria, CPU).
- Soporta tanto programación de alto nivel como bajo nivel.

Aunque C++ tiene una sintaxis similar a otros lenguajes como C, su potencia radica en sus características adicionales como clases, objetos, y manejo manual de memoria.

---

### Instalación de C++ en tu máquina

Para poder comenzar a escribir y ejecutar programas en C++, primero necesitas tener un compilador instalado en tu computadora. A continuación, te mostramos cómo hacerlo en diferentes sistemas operativos.

#### **1. En Windows**

Para instalar un compilador de C++ en Windows, una opción popular es usar el compilador **MinGW** (Minimalist GNU for Windows) o **Microsoft Visual C++**.

1. **MinGW**:
   - Descarga el instalador desde [MinGW](http://www.mingw.org/).
   - Sigue el asistente de instalación y asegúrate de seleccionar la opción "mingw32-gcc-g++" para instalar el compilador de C++.
   - Añade el directorio bin de MinGW a tu PATH para poder acceder al compilador desde cualquier terminal.

2. **Microsoft Visual C++**:
   - Descarga [Visual Studio Community Edition](https://visualstudio.microsoft.com/es/vs/community/).
   - Durante la instalación, selecciona el "Desarrollo de escritorio con C++".
   - Una vez instalado, abre Visual Studio y crea tu primer proyecto en C++.

#### **2. En macOS**

En macOS, puedes instalar el compilador C++ a través de la herramienta **Xcode Command Line Tools**.

1. Abre la Terminal.
2. Ejecuta el siguiente comando:
xcode-select --install
3. Esto instalará las herramientas necesarias, incluido el compilador **clang** (compatible con C++).

#### **3. En Linux**

La mayoría de las distribuciones de Linux ya tienen un compilador de C++ disponible. Para instalarlo, usa el siguiente comando en la terminal (esto instalará **g++**, el compilador de C++ de GNU):

En distribuciones basadas en Debian (como Ubuntu):
```bash
sudo apt update
sudo apt install g++
En distribuciones basadas en Red Hat (como Fedora):
sudo dnf install gcc-c++
