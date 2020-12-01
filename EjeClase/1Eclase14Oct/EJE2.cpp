#include<iostream>
using namespace std;
//Arreglo que muestra los numeros pares
int main(){
    int arreglo[100],a=0;
    for(int i=0;i<100;i++){
        a++;
        arreglo[i]=a;
        if(a%2 == 0){
            cout<<arreglo[i]<<" Es par"<<endl;
        }
        else{
            cout<<endl;
        }
    }
    return 0;
}