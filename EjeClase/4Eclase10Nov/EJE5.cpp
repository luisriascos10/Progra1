#include<iostream>
using namespace std;
//conversion de pesos a dolares y euros
// dolares = salida1; euros =salida2;
void ref(float pesos,float &dolares,float &euros);
int main(){
	float pesos,sal1,sal2;
	cout<<"Por favor ingrese el valor de la moneda en pesos"<<endl;
	cin>>pesos;
	ref(pesos,sal1,sal2);
	cout<<pesos<<" COP ---> "<<"$"<<sal1<<" USD"<<endl;
	cout<<pesos<<" COP ---> "<<"$"<<sal2<<" EUR"<<endl;
	return 0;
}
void ref(float pesos,float &dolares,float &euros){
	float valor1,valor2;
	valor1=3547.7;
	valor2=4275.06;
	dolares=pesos/valor1;
	euros=pesos/valor2;
}