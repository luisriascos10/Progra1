#include<iostream>
#include<math.h>
using namespace std;
//Programa que calcula la distancia euclidiana entre 2 puntos
float distancia(float x1,float y1,float x2,float y2);
int main(){
	float X1,X2,Y1,Y2,res;
	cout<<"Programa que calcula la diatancia euclidiana de 2 puntos"<<endl;
	cout<<"Por favor ingrese el punto (X1,Y1)"<<endl;cin>>X1;cin>>Y1;cout<<endl;
	cout<<"Punto A = ("<<X1<<","<<Y1<<")"<<endl;cout<<endl;
	cout<<"Por favor ingrese el punto (X2,Y2)"<<endl;cin>>X2;cin>>Y2;cout<<endl;
	cout<<"Punto B = ("<<X2<<","<<Y2<<")"<<endl;cout<<endl;
	cout<<"Distancia euclidiana es: "<<distancia(X1,Y1,X2,Y2)<<endl;
	return 0;
}
float distancia(float x1,float y1,float x2,float y2){
	float res,var1,var2,X1,X2,Y1,Y2;
	var1=pow((x2-x1),2);
	var2=pow((y2-y1),2);
	res=sqrt(var1+var2);
	return res;
}