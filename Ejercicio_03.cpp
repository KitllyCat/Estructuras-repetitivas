#include <iostream>
using namespace std;

int main(){
	int num,sumT=0,x=0,y=0,z;
	cout<<"Ingrese la cantidad de 'n' numeros que desea sumar: ";
	cin>>num;
	
	for(int i=0;i<num;i++){
		y++;
		x=x+y;
	}
	cout<<"La suma total de '"<<num<<"' numeros es de "<<x<<"."<<endl;
	
    return 0;
}

