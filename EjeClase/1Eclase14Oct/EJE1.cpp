#include<iostream>
using namespace std;
//llenar un arreglo de 100 posiciones con unos
int main(){

	int arreglo[100],a=0;

	for(int i=0;i<100;i++){
		arreglo[i]=1;	
	}
	for(int i=0;i<100;i++){
		a++;
		cout<<"Posicion "<<a<<" del arreglo = "<<arreglo[i]<<endl;
	}
	return 0;
}
