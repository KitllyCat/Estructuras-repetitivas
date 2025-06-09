#include <iostream>
using namespace std;

int main() {
    int n, gasto;
    int gastoTotal = 0;

    cout << "Ingrese la cantidad de gastos que desea registrar: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el monto del gasto " << i << ": ";
        cin >> gasto;
        gastoTotal += gasto;
    }

    cout << endl;
    cout << "El total de " << n << " gastos es de S/ " << gastoTotal << "." << endl;

    return 0;
}
