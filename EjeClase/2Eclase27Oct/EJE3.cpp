#include<iostream>
#include<stdlib.h>
using namespace std;
//desarrollar una matriz que guarde los primeros n numeros de la serie de fibonacci
int main(){
	int n=4,m=5;
	int a=1,b,c_1=0,arreglo[n][m];
	cout<<"Programa que muestra los primeros 20 numeros "<<endl;
	cout<<"de la serie de Fibonacci en una matriz"<<endl;cout<<endl;
	for(int f=0;f<4;f++){
		for(int c=0;c<5;c++){
			b=a;
			a+=c_1;
			c_1=b;
			arreglo[f][c]=a;
		}
	}
	for(int f=0;f<4;f++){
		for(int c=0;c<5;c++){
			cout<<arreglo[f][c]<<" ";
		}cout<<endl;
	}
	return 0;
}