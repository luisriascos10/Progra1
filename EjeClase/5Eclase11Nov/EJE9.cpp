#include<iostream>
using namespace std;
//Realizar la matrix identidad de tamanio n*n

void MatrizIdentidad(float *parreglo,int n); //funcion de la matrizidentidad
void imprimir(float *parreglo,int n); //funcion para imprimir

int main(){
	int n;
	cout<<"Por favor ingresar el rango del arreglo"<<endl;cin>>n;
	float arreglo[n][n];
	float *parreglo = &arreglo[0][0]; //Puntero
	
	MatrizIdentidad(&arreglo[0][0],n);
	imprimir(&arreglo[0][0],n);
	
	return 0;
}
//impresion del arreglo
void imprimir(float *parreglo,int n){
	cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			cout<<parreglo[f*n+c]<<" ";
		}cout<<endl;
	}
}
//Operacion con el arreglo
void MatrizIdentidad(float *parreglo,int n){
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			if(f==c){
				parreglo[f*n+c]=1;
			}
			else{
				parreglo[f*n+c]=0;
			}
		}
	}
}
