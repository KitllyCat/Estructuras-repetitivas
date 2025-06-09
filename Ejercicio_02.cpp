#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // Para permitir salida en UTF-8 en consola de Windows

    int numero;
    int contador = 0;

    do {
        cout << "Ingrese un número (negativo para terminar): ";
        cin >> numero;

        if (numero >= 0) {
            contador++;
        } else {
            cout << "\nLa cantidad de números positivos ingresados es: " << contador << endl;
            cout << "Fin del programa..." << endl;
        }
    } while (numero >= 0);

    return 0;
}
