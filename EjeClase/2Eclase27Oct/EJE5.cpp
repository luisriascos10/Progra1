#include<iostream>
#include<stdlib.h>
using namespace std;
//suma,resta,multiplicacion,traspuesta, y multiplicacion de un escalar de matrices cuadradas
int main(){
	int n,a=0,escalar;
	cout<<"Por favor ingrese el rango del arreglo"<<endl;cin>>n;cout<<endl;
	int arregloA[n][n],arregloB[n][n],total[n][n];
	//llenar matriz A
	cout<<"Matriz A"<<endl;cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){a++;
			cout<<"Por favor ingrese la posicion "<<f+1<<c+1<<" ";cin>>arregloA[f][c];
		}
	}cout<<endl;
	//Impresionn de matriz A
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){a++;
			cout<<arregloA[f][c]<<" ";
		}cout<<endl;
	}cout<<endl;
	//llenar matriz B
	cout<<"Matriz B"<<endl;cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){a++;
			cout<<"Por favor ingrese la posicion "<<f+1<<c+1<<" ";cin>>arregloB[f][c];
		}
	}cout<<endl;
	//Impresion de matriz B
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){a++;
			cout<<arregloB[f][c]<<" ";
		}cout<<endl;
	}cout<<endl;
	//Suma de las matrices e impresion
	cout<<"Matriz A + Matriz B = "<<endl;cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			cout<<arregloA[f][c]+arregloB[f][c]<<" ";
		}cout<<endl;
	}cout<<endl;
	//Resta de las matrices e impresion
	cout<<"Matriz A - Matriz B = "<<endl;cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			cout<<arregloA[f][c]-arregloB[f][c]<<" ";
		}cout<<endl;
	}cout<<endl;
	//Multiplicacion de las matrices
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			total[f][c]=0;
			for(int mult=0;mult<n;mult++){
				total[f][c]=total[f][c]+(arregloA[f][mult]*arregloB[mult][c]);
			}
		}
	}
	//Impresion de la multiplicacion
	cout<<"Matriz A x Matriz B = "<<endl;cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			cout<<total[f][c]<<" ";
		}cout<<endl;
	}cout<<endl;
	//Matriz traspuesta
	cout<<"Matriz Traspuesta de A = "<<endl;cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			cout<<arregloA[c][f]<<" ";
		}cout<<endl;
	}cout<<endl;
	cout<<"Matriz Traspuesta de B = "<<endl;cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			cout<<arregloB[c][f]<<" ";
		}cout<<endl;
	}cout<<endl;
	//Matriz por un escalar
	cout<<"Matriz A por un Escalar"<<endl;cout<<"Elige el valor del escalar"<<endl;
	cin>>escalar;cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			cout<<arregloA[f][c]*escalar<<" ";
		}cout<<endl;
	}cout<<endl;
	cout<<"Matriz B por un Escalar"<<endl;cout<<"Elige el valor del escalar"<<endl;
	cin>>escalar;cout<<endl;
	for(int f=0;f<n;f++){
		for(int c=0;c<n;c++){
			cout<<arregloB[f][c]*escalar<<" ";
		}cout<<endl;
	}cout<<endl;		
	return 0;
}