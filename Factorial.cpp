#include <iostream>
using namespace std;

// Función recursiva para calcular el factorial
int factorial(int n) { // Función recursiva para calcular el factorial
    if (n <= 1) {
        return 1;  // Caso base: el factorial de 0 o 1 es 1
    } else {
        return n * factorial(n - 1);  // Llamada recursiva
    }
}

int main() { //Ejecucion del codigo
    int num;
    cout << "Ingresa un número para calcular su factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    }

    return 0;
}
