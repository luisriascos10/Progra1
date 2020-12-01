#include<iostream>
#include<math.h>
using namespace std;
//Programa que calcula el area de un circulo salida1=radio; salida2=area;
void parametros(float p,float &salida1,float &salida2);
int main(){
	float p,sal1,sal2;
	cout<<"Programa que calcula el area y el radio de un circulo"<<endl;
	cout<<" solo si se da el perimetro"<<endl;cin>>p;cout<<endl;
	parametros(p,sal1,sal2);
	cout<<"El area del circulo es: "<<sal2<<" Unidades cuadradas"<<endl;
	cout<<"El radio del circulo es: "<<sal1<<" Unidades"<<endl;
	return 0;
}
void parametros(float p,float &salida1,float &salida2){
	float pi=3.14159265;
	salida1 = (2*pi)/p;
	salida2 = (pi*pi*pi*4)/(p*p);
}