#include <iostream>
using namespace std;

int main(){
	int num,sumT=0,x=0,y=0,z;
	do{
		cout<<"Ingrese la cantidad de 'n' numeros que desea sumar: ";
		cin>>num;
		
		if(num<=0){
			cout<<"El numero no puede ser cero o menor"<<endl;
		}
	}while(num<=0);
	
	for(int i=0;i<num;i++){
		y++;
		x=x+y;
	}
	cout<<"La suma total de '"<<num<<"' numeros es de "<<x<<"."<<endl;
	
    return 0;
}

