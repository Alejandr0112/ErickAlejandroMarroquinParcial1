#include <iostream>

int main() {
    int a = 0; //impares
    int b = 0; //pares
    int i = 0;

    while (i <= 50) {
        if (i % 2 == 0) { // Si el número es par
            b += i; // Sumar al total de números pares
        } else { // Si el número es impar
            a += i; // Sumar al total de números impares
        }
        i++; // Incrementar el contador
    }

    std::cout << "a: Suma de los numeros impares hallados dentro del rango 0 a 50: " << a << std::endl;
    std::cout << "b: Suma de los numeros pares: " << b << std::endl;

    return 0;
}
