#include <iostream>
using namespace std;

int main() {
    int cantidadNumeros;
    int sumaTotal = 0;

    // Solicitar una cantidad válida
    do {
        cout << "Ingrese la cantidad de números que desea sumar (1 + 2 + ... + n): ";
        cin >> cantidadNumeros;

        if (cantidadNumeros <= 0) {
            cout << "El número debe ser mayor que cero." << endl;
        }
    } while (cantidadNumeros <= 0);

    // Calcular la suma de los primeros n números naturales
    for (int i = 1; i <= cantidadNumeros; i++) {
        sumaTotal += i;
    }

    cout << "La suma total de los primeros " << cantidadNumeros << " números naturales es: " << sumaTotal << "." << endl;

    return 0;
}


