#include<iostream>
using namespace std;
//llenar un arreglo de 100 posiciones con unos

void Matrizunos(int *parreglo);
void imprimir(int *parreglo);

int main(){
	cout<<"Programa que llena un arreglo de 100 posiciones con unos"<<endl;
	int arreglo[100];
	int *parreglo = &arreglo[0]; //Puntero
	Matrizunos(&arreglo[0]);
	imprimir(&arreglo[0]);
	return 0;
}
//impresion del arreglo
void imprimir(int *parreglo){
	cout<<endl;
	int a=0;
	for(int i=0;i<100;i++){
		a++;
		cout<<"Posicion "<<a<<" del arreglo = "<<parreglo[i]<<endl;
	}
}
//Operacion con el arreglo
void Matrizunos(int *parreglo){
	cout<<endl;
	for(int i=0;i<100;i++){
		parreglo[i]=1;
	}
}