#include<iostream>
#include<math.h>
using namespace std;

float AreaC(float radio);
int main(){
	float rad;
	cout<<"Programa que calcula el area de un circulo"<<endl;
	cout<<"Por favor ingresa el radio"<<endl;cin>>rad;cout<<endl;
	cout<<"El area del circulo es: "<<AreaC(rad)<<" Unidades cuadradas"<<endl;
	return 0;
}
float AreaC(float radio){
	float res;
	res=(3.14159265*pow((radio),2));
	return res;
}




