#include<iostream>
using namespace std;
//Llenar un arreglo con 10 posiciones ingresadas por teclado

void imprimir(int *parreglo);
void A(int *parreglo);

int main(){
	int arreglo[10];
	int *parreglo = &arreglo[0]; //Puntero
	A(&arreglo[0]);imprimir(&arreglo[0]);
	return 0;
}
//operacion con el arreglo,llenado del arreglo
void A(int *parreglo){
	int a=0,numero;
	for(int i=0;i<10;i++){
		a++;
		cout<<"Por favor ingresa un numero"<<endl;cin>>numero;cout<<endl;
		parreglo[i]=numero;
	}
}
//impresion del arreglo
void imprimir(int *parreglo){
	int a=0;
	for(int i=0;i<10;i++){
		a++;
		cout<<"Posicion "<<a<<" del arreglo, usted digito = "<<parreglo[i]<<endl;
	}
}
