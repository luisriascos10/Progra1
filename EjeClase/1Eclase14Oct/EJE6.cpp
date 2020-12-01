#include<iostream>
#include<stdlib.h>
using namespace std;
//Dado un arreglo de N posiciones determinar cual de ellos es el mayor
int main(){
    int a,b=0,i,n,elmayor;
	cout<<"Ingresar el rango del arreglo"<<endl;cin>>n;int arreglo[n];cout<<endl;
	for(i=0;i<n;i++){
		cout<<"Ingresa un valor a la posicion "<<i<<" del arreglo"<<endl;
		cin>>a;cout<<endl;
		arreglo[i]=a;
		cout<<"En la posicion "<<b<<" del vector esta : "<<arreglo[i]<<endl;	
			if(i==0){
				elmayor=arreglo[i];
			}
			else{
				if(arreglo[i]>elmayor){
						elmayor=arreglo[i];
				}
			}
	}
	cout<<endl;cout<<"El numero mayor es: "<<elmayor<<endl;cout<<endl;
    return 0;
}