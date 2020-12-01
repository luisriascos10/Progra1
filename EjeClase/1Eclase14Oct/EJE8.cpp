#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//llenar un arreglo con numeros aleatorios y determinar
//cuales son pares
int main(){
    srand(time(NULL));
    int n,a=0;
    cout<<"El programa calcula numeros aleatorios del 1 al 500"<<endl;
    cout<<"Por favor ingresar el valor del rango del arreglo"<<endl;cin>>n;cout<<endl;
    int arreglo[n];
    for(int i=0;i<n;i++)
	{   a++;
		arreglo[i] = rand() % 500 +1;
        cout<<a<<" numero aleatorio: "<<arreglo[i]<<endl;
	}cout<<endl;
    for(int i=0;i<n;i++){
        if(arreglo[i]%2 == 0){
            cout<<arreglo[i]<<endl;
        }
    }
    return 0;
}