#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//desarrolle un arreglo de tamano n x n y halle el valor minimo
int main(){
    int n,elmenor,a=0;
    cout<<"Por favor ingrese el rango de la matriz"<<endl;cin>>n;cout<<endl;
    int arreglo[n][n];
    srand(time(NULL));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arreglo[i][j]=rand()%100+1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0){
                elmenor=arreglo[i][j];
            }
            else{
                if(arreglo[i][j]<elmenor){
                    elmenor=arreglo[i][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arreglo[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"El numero menor en la matriz de "<<n<<" x "<<n<<" es: "<<elmenor<<endl;
    return 0;
}