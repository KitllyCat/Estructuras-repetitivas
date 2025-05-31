#include <iostream>
using namespace std;

int main(){
	int num;	
	do{
		cout<<"Ingrese su numero: ";
		cin>>num;
		if (num<0){
			cout<<"Fin de la captura"<<endl;
		}
	}while (num>0);
	
    return 0;
}

