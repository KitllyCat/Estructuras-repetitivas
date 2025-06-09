#include <iostream>
using namespace std;

int main() {
    int n;

    // Solicita al usuario un número válido mayor que 0
    do {
        cout << "Ingrese la cantidad de multiplos de 7 que desea ver: ";
        cin >> n;

        if (n <= 0) {
            cout << "El valor debe ser mayor que cero." << endl;
        }
    } while (n <= 0);

    cout << "Los primeros " << n << " múltiplos de 7 son:" << endl;

    for (int i = 1; i <= n; i++) {
        cout << "-> " << (i * 7) << endl;
    }

    cout << "Fin." << endl;
    return 0;
}
