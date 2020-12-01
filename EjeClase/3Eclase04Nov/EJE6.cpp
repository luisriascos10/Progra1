#include<iostream>
using namespace std;
//n primeros numeros de la serie de fibonacci y promedio
float Promedio(float num,float n,float anterior);
int main(){
	/*float num=1,n;
	float anterior=0;
	float aux;*/
	float n;
	cout<<"Programa que guarda los n primeros numeros "<<endl;
	cout<<"de la serie de Fibonacci"<<endl;cin>>n;cout<<endl;
	cout<<"El promedio de los primeros "<<n<<" numeros de la sucesion"<<endl;
	cout<<" de Fibonacci es: "<<Promedio(1,n,0)<<endl;
	return 0;
}
float Promedio(float num,float n,float anterior){
	float res,aux,suma;
	for(int i=0;i<n;i++){
		aux=num;
		num=num+anterior;
		anterior=aux;
		suma=suma+num;
		cout<<num<<endl;
	}
	res=suma/n;
	return res;
}