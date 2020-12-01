#include<iostream>
#include<math.h>
using namespace std;
//Programa que calcula las raices de una Ecuacion cuadratica,
//solo los valores reales
void raices(float &x1,float &x2);
int main(){
	float s1,s2;
	raices(s1,s2);
	cout<<"Las raices son: "<<s1<<" y "<<s2<<endl;
	return 0;
}
void raices(float &x1,float &x2){
	float a,b,c;
	cout<<"Ingrese a "<<endl;cin>>a;cout<<endl;
	cout<<"Ingrese b "<<endl;cin>>b;cout<<endl;
	cout<<"Ingrese c "<<endl;cin>>c;cout<<endl;
	if(a != 0){
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	}
}