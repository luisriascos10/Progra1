#include<iostream>
using namespace std;
int factorial(int n);
//arriba del main se nombran las variables y el tipo,prototipo
int main(){
	int n;
	cout<<"Por favor ingrese un numero"<<endl;cin>>n;cout<<endl;
	cout<<"El factorial de "<<n<<" es: "<<factorial(n)<<endl;
	return 0;
}
//abajo del main se opera...
int factorial(int n){
	if(n==0){
		n=1;
	}
	else{
		n=n*factorial(n-1);
	}
	return n;
}

