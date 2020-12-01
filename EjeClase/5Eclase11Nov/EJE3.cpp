#include<iostream>
using namespace std;
//Multiplicar un vector de 50 posiciones con un escalar

void imprimir(int *parreglo);
void vector(int *parreglo);

int main(){
	int arreglo[50];
	int *parreglo = &arreglo[0]; //Puntero
	vector(&arreglo[0]);imprimir(&arreglo[0]);
	return 0;
}
//operacion con el arreglo
void vector(int *parreglo){
	cout<<endl;
	int a=0,numero;
	cout<<"Por favor ingresa un numero escalar"<<endl;cin>>numero;cout<<endl;
	for(int i=0;i<50;i++){
		a++;
		parreglo[i]=a;
		parreglo[i]=numero*parreglo[i];
	}
}
//impresion del arreglo
void imprimir(int *parreglo){
	cout<<endl;
	int a=0;
	for(int i=0;i<50;i++){
		a++;
		cout<<"Posicion "<<a<<" del arreglo = "<<parreglo[i]<<endl;
	}
}