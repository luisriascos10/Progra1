#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//Llenar un arreglo de 10 posiciones con numeros aleatorios y
//decir cuales son pares

void A(int *parreglo);

int main(){
	int n;
	int arreglo[n];
	int *parreglo = &arreglo[0]; //Puntero
	A(&arreglo[0]);
	return 0;
}
//operacion con el arreglo,llenado del arreglo
void A(int *parreglo){
	srand(time(NULL));
    int n,a=0;
    cout<<"El programa calcula numeros aleatorios del 1 al 500"<<endl;
    cout<<"Por favor ingresar el valor del rango del arreglo"<<endl;cin>>n;cout<<endl;
    for(int i=0;i<n;i++)
	{   a++;
		parreglo[i] = rand() % 500 +1;
        cout<<a<<" numero aleatorio: "<<parreglo[i]<<endl;
	}cout<<endl;
	cout<<"Los numeros pares son: "<<endl;cout<<endl;
    for(int i=0;i<n;i++){
        if(parreglo[i]%2 == 0){
            cout<<parreglo[i]<<endl;
        }
    }
}