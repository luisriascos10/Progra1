#include<iostream>
using namespace std;
//llenar un arreglo con numeros impares de 0 a N
//y sumar todos estos.
int main(){

    int n,suma=0;
    cout<<"Por favor ingrese el valor del arreglo"<<endl;cin>>n;cout<<endl;
    int arreglo[n];
    for(int i=0;i<=n;i++){
        arreglo[i]=i;
        if(arreglo[i]%2 == 0){
            cout<<"";
        }
        else{
            cout<<arreglo[i]<<endl;
            suma=suma+arreglo[i];
        }
    }
    cout<<endl;
    cout<<"La suma de todos los numeros impares es: "<<suma<<endl;
    cout<<endl;
    return 0;
}