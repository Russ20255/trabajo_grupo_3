#include <iostream>
using namespace std;

// Calculadora simple en C++
// Se incluyen funciones básicas de suma y resta.

// ============================
// Sección de Suma y Resta
// Autor: Isai Rutman Mercado Clemente
// Email: 76505332@continental.edu.pe
// ============================

int suma(int a, int b) {
    // Función de suma - sección encargada a Isai Rutman Mercado Clemente
    return a + b;
}

int resta(int a, int b) {
    // Función de resta - sección encargada a Isai Rutman Mercado Clemente
    return a - b;
}

int main() {
    int opcion;
    int num1, num2;

    cout << "Calculadora simple\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (opcion == 1) {
        int resultado = suma(num1, num2);
        cout << "Resultado de la suma: " << resultado << endl;
    } else if (opcion == 2) {
        int resultado = resta(num1, num2);
        cout << "Resultado de la resta: " << resultado << endl;
    } else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}
