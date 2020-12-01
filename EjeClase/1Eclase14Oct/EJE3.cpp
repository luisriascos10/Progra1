#include<iostream>
using namespace std;
//Multiplicar un arreglo por un escalar
int main(){
    int arreglo[50],escalar,a=0,b=0,c=0;
    while(c=0)
    {
        cout<<"Por favor ingrese un numero escalar"<<endl;cin>>escalar;cout<<endl;
        for(int i=0;i<50;i++){
             a++;
            arreglo[i]=a*escalar;
        }
        for(int i=0;i<50;i++){
            b++;
            cout<<"Posicion "<<b<<" del arreglo = "<<arreglo[i]<<endl;
        }
    }
    return 0;
}