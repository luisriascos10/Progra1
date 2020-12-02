#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//Desarrollar un programa que genera un arreglo de nxn y que
//halle el valor minimo y el maximo.

void A(int *parreglo); //Se define el prototipo, tipo de dato.

int main(){
    int n;
    int arreglo[n];
    int *parreglo=&arreglo[0]; //puntero
    A(&arreglo[0]); //llamado de la funcion
}
//operar
void A(int *parreglo){
    int n,elmenor,elmayor;
    cout<<"Por favor ingresar el rango de la matriz"<<endl;
    cin>>n;cout<<endl;
    int arreglo[n][n];
    srand(time(NULL));
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                elmenor=arreglo[i][j];
                elmayor=arreglo[i][j];
            }
            else{
                if(arreglo[i][j]<elmenor){
                    elmenor=arreglo[i][j];
                }
                if(arreglo[i][j]>elmayor){
                    elmayor=arreglo[i][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arreglo[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    cout<<"El numero menor del arreglo bidimensional "<<n<<"x"<<n<<" es:"<<elmenor<<endl;
    cout<<"El numero mayor del arreglo bidimensional "<<n<<"x"<<n<<" es:"<<elmayor<<endl;
}








