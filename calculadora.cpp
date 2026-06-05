#include <iostream>
#include <limits>
#include <string>

// =================================== //
// Sección de Suma y Resta 
// Autor: Isai Rutman Mercado Clemente
// Email: 76505332@continental.edu.pe
// =================================== //

// =================================== //
// Sección de Suma y Resta Multiplicación
// Autor: Quinteros Serpa Markoantonio  
// Email: 76505332@continental.edu.pe
// =================================== //

int suma(int a, int b) {
    // Función de suma - Isai Rutman Mercado Clemente
    return a + b;
}

int resta(int a, int b) {
    // Función de resta - Isai Rutman Mercado Clemente
    return a - b;
}

int multiplicacion(int a, int b) {
    // Función de multiplicación - Quinteros Serpa Markoantonio
    return a * b;
}

void mostrarMenu() {
    std::cout << "Calculadora \n";
    std::cout << "1. Suma\n";
    std::cout << "2. Resta\n";
    std::cout << "3. Multiplicacion\n";
    std::cout << "0. Salir\n";
    std::cout << "Seleccione una opcion: ";
}

int leerEntero(const std::string& mensaje) {
    int valor;
    while (true) {
        std::cout << mensaje;
        if (std::cin >> valor) {
            return valor;
        }
        std::cout << "Por favor ingrese un numero entero.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void procesarOpcion(int opcion) {
    if (opcion == 1 || opcion == 2 || opcion == 3) {
        int num1 = leerEntero("Ingrese el primer numero: ");
        int num2 = leerEntero("Ingrese el segundo numero: ");

        int resultado;

        if (opcion == 1) {
            resultado = suma(num1, num2);
            std::cout << "Resultado de la suma: " << resultado << "\n";
        } else if (opcion == 2) {
            resultado = resta(num1, num2);
            std::cout << "Resultado de la resta: " << resultado << "\n";
        } else {
            resultado = multiplicacion(num1, num2);
            std::cout << "Resultado de la multiplicacion: " << resultado << "\n";
        }

    } else if (opcion != 0) {
        std::cout << "Intente de nuevo.\n";
    }
}

int main() {
    int opcion = -1;

    while (opcion != 0) {
        mostrarMenu();
        opcion = leerEntero("\n");
        procesarOpcion(opcion);

        if (opcion != 0) {
            std::cout << "\n";
        }
    }

    std::cout << "Gracias por usar la calculadora.\n";
    return 0;
}