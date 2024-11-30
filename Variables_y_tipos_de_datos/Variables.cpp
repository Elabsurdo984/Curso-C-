#include <iostream>

int main() {
    int edad = 20;
    float altura = 1.75;
    char letra = 'A';
    bool pregunta = true;

    std::cout << "Tienes " << edad << " anios" << std::endl;
    std::cout << "Mides " << altura << " metros" << std::endl;
    std::cout << "Tu nombre empieza por " << letra << std::endl;
    std::cout << "Eres hombre? " << (pregunta ? "Si" : "No") << std::endl;
}