#include<iostream>
using namespace std;
//Desarrollar una funcion usando paso por puntero que calcula la mediana de un arreglo de tamanio n
void A(int *parreglo1); //Prototipo

int main(){
	int n;
    int arreglo[n];
	A(&arreglo[0]);
	return 0;
}
void A(int *parreglo1){
	
	int a=0,n,numero,x;
	float b;
	cout<<"Por favor ingrese el rango del arreglo"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Por favor ingresa un numero"<<endl;cin>>numero;
		parreglo1[i]=numero;
	}
	for(int i=n;i>0 && a==0;i--){
		a=1;
		for(int j=0;j<i;j++){
			if(parreglo1[j]>parreglo1[j+1]){
				x = parreglo1[j];
				parreglo1[j]=parreglo1[j+1];
				parreglo1[j+1] = x;
				a=0;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<parreglo1[i]<<endl;
	}
	if(n%2 != 0){
		cout<<"La mediana es: "<<parreglo1[n/2]<<endl; // posicion mediana para rango impar
	}
	else{
		cout<<"El segund0 valor que esta en la mitad es: "<<parreglo1[n/2]<<endl;  //posicion mediana para rango par
		cout<<"El primer valor que esta en la mitad es: "<<parreglo1[(n/2)-1]<<endl;
		b=(((parreglo1[n/2])+(parreglo1[(n/2)-1])))/2;
		cout<<"Por tanto la madiana es: "<<b<<endl;
	}
}