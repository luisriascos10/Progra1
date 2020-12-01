#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n,a=0;
    cout<<"Por favor ingresar el tamano de la matriz"<<endl;cin>>n;cout<<endl;
    int arreglo[n][n];
    for(int f=0;f<n;f++){
        for(int c=0;c<n;c++){
            if(f==c){
                arreglo[f][c]=1;
            }
            else{
                arreglo[f][c]=0;
            }
        }
    }
    cout<<"La matriz identidad "<<n<<" x "<<n<<" es: "<<endl;
    for(int f=0;f<n;f++){
        for(int c=0;c<n;c++){
            cout<<arreglo[f][c]<<" ";
        }cout<<endl;
    }
    system("PAUSE");
    return 0;
}