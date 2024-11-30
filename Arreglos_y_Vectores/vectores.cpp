#include <iostream>
#include <vector> //Biblioteca incluida para vectores

int main() {
    //Crear un vector de enteros
    std::vector<int> numeros;

    // Añadir elementos al vector
    numeros.push_back(10);  // Agrega 10 al final
    numeros.push_back(20);  // Agrega 20 al final
    numeros.push_back(30);  // Agrega 30 al final

    //Imprimir los elementos del vector
    std::cout << "Elementos del vector: " << std::endl;
    for (int i = 0; i < numeros.size(); i++) {
        std::cout << "Elemento " << i << ": " << numeros[i] << std::endl;
    }

    return 0;
}