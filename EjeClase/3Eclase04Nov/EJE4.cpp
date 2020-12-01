#include<iostream>
using namespace std;
float ITotal1(float v,float r1,float r2,float r3);
float ITotal2(float v,float r1,float r2,float r3);
int main(){
	float R1,R2,R3,V;
	cout<<"Programa que calcula la corriente total de un circuito de 3 resistencias"<<endl;
	cout<<" en paralelo o en serie"<<endl;cout<<endl;
	cout<<"Selecciona el valor de R1"<<endl;cin>>R1;cout<<"Selecciona el valor de R2"<<endl;cin>>R2;
	cout<<"Selecciona el valor de R3"<<endl;cin>>R3;cout<<endl;cout<<"Valor del voltaje"<<endl;cin>>V;cout<<endl;
	cout<<"En Serie la corriente total es: "<<ITotal1(V,R1,R2,R3)<<" Amperios"<<endl;
	cout<<"En Paralelo la corriente total es: "<<ITotal2(V,R1,R2,R3)<<" Amperios"<<endl;
	return 0;
}
float ITotal1(float v,float r1,float r2,float r3){
	
	float IS;
	IS = v/(r1+r2+r3);
	return IS;
}
float ITotal2(float v,float r1,float r2,float r3){
	float IP,equ;
	equ=1/((1/r1)+(1/r2)+(1/r3));
	IP = v/equ;
	return IP;
}
