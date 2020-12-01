#include<iostream>
using namespace std;
//Programa que calcula el valor de la corriente dada
//el valor de la resistencia y la tension
float corriente(float V,float R){
	float res;
	res = V/R;
	return res;
}
//arriba del main se hacen los nombramientos y tipos de datos
int main(){
	float R,V,c;
	cout<<"Por favor ingresar el valor de la resistencia"<<endl;cin>>R;
	cout<<"Por favor ingresar el valor del voltaje"<<endl;cin>>V;
	c = corriente(V,R);
	cout<<"El valor de la resistencias es : "<<c<<" Amperios"<<endl;
	return 0;
}
//abajo del main se operan las funciones