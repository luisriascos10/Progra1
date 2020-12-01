#include<iostream>
using namespace std;
//Programa que calcula el mayor y el menor de 3 numeros
//out1=el mayor;out2=elmenor
void ref(int numero,int &out1,int &out2);
int main(){
	int a,elmayor,elmenor;
	ref(a,elmayor,elmenor);
	cout<<"El mayor es: "<<elmayor<<endl;
	cout<<"El menor es: "<<elmenor<<endl;
}
void ref(int numero,int &out1,int &out2){
	for(int i=0;i<3;i++){
		cout<<"Por favor ingresa un numero"<<endl;cin>>numero;cout<<endl;
		if(i==0){
			out1 = numero;
			out2 = numero;
		}
		else{
			if(numero>out1){
				out1=numero;
			}
			if(numero<out2){
				out2=numero;
			}
		}	
	}
}