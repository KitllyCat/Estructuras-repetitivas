#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int numero;	
	int contador = 0;
	
	do{
		cout << "Ingrese su número: ";
		cin >> numero;
		contador++;

		if (numero < 0){
			cout << "La cantidad de números positivos es de: " << contador - 1 << endl;
			cout << "Fin del programa..." << endl;
		}
	}while (numero > 0);
	
    return 0;
}