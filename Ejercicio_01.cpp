#include <iostream>
using namespace std;

int main(){
	
	int n,multiplo=7,i=1;
	
	cout<<"Ingrese la cantidad de 'n' multiplos que desea saber de 7: ";
	cin>>n;
	
	if(n<=0){
		cout<<"El valor no puede ser cero."<<endl;	
	}else {
		cout << "Los primeros " << n << " multiplos de 7 son:" << endl;
		while (i<=n){
			cout<<"-> "<<multiplo<<endl;
			multiplo+=7;
			i++;
		}
	}
	cout<<"Fin."<<endl;
	return 0;
}
