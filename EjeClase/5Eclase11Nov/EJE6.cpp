#include<iostream>
using namespace std;
//el menor de un conjunto de numeros impares de 0 a N

void A(int *parreglo); //Prototipo

int main(){
    int n;
	int arreglo[n];
	int *parreglo = &arreglo[0]; //Puntero
	A(&arreglo[0]);
    return 0;
}
//Operacion
void A(int *parreglo){
	int n,suma=0;
    cout<<"Por favor ingrese el valor del arreglo"<<endl;cin>>n;cout<<endl;
    cout<<"Los numeros impares de 0 a "<<n<<" son:"<<endl;cout<<endl;
    for(int i=0;i<=n;i++){
        parreglo[i] =i;
        if(parreglo[i] %2 == 0){
            cout<<"";
        }
        else{
            cout<<parreglo[i]<<endl;
            suma=suma+parreglo[i];
        }
    }
    cout<<endl;
    cout<<"La suma de todos estos numeros impares es: "<<suma<<endl;
    cout<<endl;
}