#include <iostream>
using namespace std;

int main(){
	int n, gasto, gastoF, x=1;

	cout<<"Ingresa la cantidad de gastos que desea ingresar: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Ingrese el "<<x<<". monto: ";
		cin>>gasto;
		gastoF=gasto+gastoF;
		x++;
	}
	
	cout<<endl;
	cout<<"El total de "<<n<<" gastos es de s/"<<gastoF<<"."<<endl;
	
    return 0;
}

