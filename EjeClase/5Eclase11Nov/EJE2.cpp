#include<iostream>
using namespace std;
//llenar un arreglo de numeros pares entre 0 y 100

void imprimir(int *parreglo);

int main(){
	cout<<"Programa que llena un arreglo de 100 posiciones con unos"<<endl;
	int arreglo[100];
	int *parreglo = &arreglo[0]; //Puntero
	imprimir(&arreglo[0]);
	return 0;
}
//impresion del arreglo
void imprimir(int *parreglo){
	cout<<endl;
	int a=0;
	for(int i=0;i<100;i++){
		a++;
		parreglo[i]=a;
		if(parreglo[i] %2 ==0){
			cout<<"Posicion "<<a<<" del arreglo = "<<parreglo[i]<<endl;
		}
	}
}
