#include<iostream>
#include<stdlib.h>
using namespace std;
//Llenar un arreglo de 10 posiciones con numeros
//ingresados por teclado
int main(){
    int arreglo[10],a=0,b,c;

    for(int i=0;i<10;i++){
        a++;
        cout<<"Por favor ingrese el valor de la posicion "<<"";
        cout<<a<<endl;cin>>b;cout<<endl;
        arreglo[i]=b;
    }
    cout<<"Los numeros que usted ha digitado son :"<<"";
    for(int i=0;i<10;i++){
        cout<<arreglo[i]<<" , "<<"";
    }
    system("PAUSE");
    return 0;
}