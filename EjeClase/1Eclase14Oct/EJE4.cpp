#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//Programa que almacena la temperatura de las ultimas 24Hrs
//y el usuario desea saber la temperatura en que hora...
int main(){
    int arreglo1[]={18,17,17,18,18,19,19,20,21,22,24,25,25,25,24,22,21,20,20,20,19,18,18,18};
    /*int arreglo1[]={18,17,17,18,18,19,19,20,21,22,24,25};
    int arreglo2[]={25,25,24,22,21,20,20,20,19,18,18,18};*/
    int hora;
    /*string formato = "";*/
    cout<<"Elige en tiempo en el que deseas ver la temperatura en horas y en"<<"";
    cout<<" fomrmato militar"<<endl;
    cin>>hora;cout<<endl;/*cout<<"Elige el formato ¿am o pm?"<<endl;cin>>formato;*/
    /*if(formato == "am"){
        cout<<"La temperatura a las: "<<hora<<"am era de: "<<arreglo1[hora]<<"°"<<endl;
    }
    else{
        if(formato == "pm"){
            cout<<"La temperatura a las: "<<hora<<"pm era de: "<<arreglo2[hora]<<"°"<<endl;
        }
        else{
            cout<<"Formato incorrecto"<<endl;
        }
    }*/
    cout<<"La temperatura a las "<<hora;
    cout<<":00 hrs era de "<<arreglo1[hora-1]<<" grados centigrados"<<endl;
    system("PAUSE");
    return 0;
}