/*
Este es un archivo que permite calcular el factorial de un numero
y cumple con la tarea de simular un cajero automatico segun los 
deseos del usuario
*/
#include <iostream>
using namespace std;

int factorial(int num) {/* Función para calcular el factorial de un número */
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int consultarSaldo(int saldo) {/* Funcion para el cajero automático */
    cout << "Saldo actual: " << saldo << endl;
    return saldo;
}

int retirarEfectivo(int& saldo) {/* Funcion para retirar el efectivo */
    int retiro;
    cout << "Ingrese la cantidad a retirar: ";
    cin >> retiro;
    if (retiro > saldo) {
        cout << "Fondos insuficientes." << endl;
    } else {
        saldo -= retiro;
        cout << "Retiro exitoso. Saldo restante: " << saldo << endl;
    }
    return saldo;
}

int main() {/* Función principal con el menú de opciones */
    int saldo = 20000; /* Saldo inicial */
    int opcion;

    do {
        cout << "\nSeleccione una opción:" << endl;
        cout << "1. Calcular Factorial" << endl;
        cout << "2. Cajero Automático" << endl;
        cout << "3. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {/* Permite al usuario elegir una opcion del menu en pantalla */
            case 1: {
                int num;
                cout << "Ingrese un número para calcular el factorial: ";
                cin >> num;
                cout << "El factorial de " << num << " es " << factorial(num) << endl;
                break;
            }
            case 2: {
                int opcionCajero;
                do {
                    cout << "\n--- Menú de Cajero Automático ---" << endl;
                    cout << "1. Consultar Saldo" << endl;
                    cout << "2. Retirar Efectivo" << endl;
                    cout << "3. Volver al Menú Principal" << endl;
                    cout << "Opción: ";
                    cin >> opcionCajero;

                    switch (opcionCajero) {/* Permite al usuario elegir una opcion del menu del cajero */
                        case 1:
                            consultarSaldo(saldo);
                            break;
                        case 2:
                            retirarEfectivo(saldo);
                            break;
                        case 3:
                            cout << "Volviendo al Menú Principal..." << endl;
                            break;
                        default:
                            cout << "Opción inválida." << endl;/* El usuario ingreso una opcion que no incluia el menu anterior */
                    }
                } while (opcionCajero != 3);
                break;
            }
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
        }
    } while (opcion != 3);

    return 0;
}
