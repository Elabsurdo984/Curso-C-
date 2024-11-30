#include <iostream>

//nombre de la funcion          //Aqui se recibe parametros ()
int funcion                     () {

}

//funcion que suma 2 numeros
int suma(int a, int b) {
    //Devolvemos la suma de a + b
    return a + b;
}

int main() {
    int resultado = suma(3, 4);
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}