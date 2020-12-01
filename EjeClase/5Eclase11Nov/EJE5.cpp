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
 //operacion de la funcion
 void A(int *parreglo){
 	int a,b=0,i,n,elmayor;
	cout<<"Ingresar el rango del arreglo"<<endl;cin>>n;cout<<endl;
	for(i=0;i<n;i++){
		cout<<"Ingresa un valor a la posicion "<<i<<" del arreglo"<<endl;
		cin>>a;cout<<endl;
		parreglo[i]=a;
		cout<<"En la posicion "<<b<<" del vector esta : "<<parreglo[i]<<endl;	
		if(i==0){
			elmayor=parreglo[i];
		}
		else{
			if(parreglo[i]>elmayor){
				elmayor=parreglo[i];
			}
		}
	}
	cout<<endl;cout<<"El numero mayor es: "<<elmayor<<endl;cout<<endl;
 }