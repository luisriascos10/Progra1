#include<iostream>
#include<stdlib.h>
#include<fstream>
//#include<math.h>
using namespace std;

void escribir();

int main(){
	
	int variable,w1=1,w2=1,w3=1,w4=1,w5=1,z=1,a;
	while(w1==z){
		cout<<"Opcion 1   <-- Administrar Recursos Economicos"<<endl;cout<<"Opcion 2   <-- Administrar Recursos Materiales"<<endl;
		cout<<"Opcion 3   <-- Administrar Recursos Humanos"<<endl;cout<<"Opcion 4   <-- Administrar Recursos Tecnologicos"<<endl;
		cout<<"Opcion 5   <-- Salir"<<endl;cout<<endl;cout<<"Elige que deseas administrar"<<endl;cin>>variable;cout<<endl;//un condicional if, evita un valor diferente
		switch(variable) {  // Primer Switch
			case 1:cout<<"Recursos Economicos (titulo)"<<endl;cout<<endl;
			while(w2==z){
				cout<<"Opcion 1   <-- Ingresos"<<endl;cout<<"Opcion 2   <-- Egresos"<<endl;
				cout<<"Opcion 3   <-- Otros"<<endl;cout<<"Opcion 4   <--  para volver"<<endl;cout<<endl;cin>>variable;cout<<endl;
				switch(variable){  // Segundo Switch
					case 1:cout<<"Ingresos"<<endl;cout<<endl;
					while(w3==z){
						cout<<"Opcion 1   <-- Productos vendidos"<<endl;cout<<"Opcion 2   <-- Bonos"<<endl;
						cout<<"Opcion 3   <-- Otros"<<endl;cout<<"Opcion 4   <-- volver otra opcion"<<endl;cout<<"Opcion 5   <-- salir"<<endl;cin>>variable;cout<<endl;
						switch(variable){  //Tercer Switch
							case 1:cout<<"Productos vendidos(titulo)"<<endl;cout<<endl;
							while(w4==z){
								cout<<"Opcion 1   <-- Ver tipo de producto 1"<<endl;cout<<"Opcion 2   <-- Ver tipo de Producto 2"<<endl;
								cout<<"Opcion 3   <-- Ver tipo de producto 3"<<endl;cout<<"Opcion 4   <-- Ver tipo de producto 4"<<endl;
								cout<<"Opcion 5   <-- Volver otra opcion"<<endl;cout<<"Opcion 6   <-- Salir"<<endl;cout<<endl;cin>>variable;cout<<endl;
								switch(variable){
									case 1:cout<<"Producto 1"<<endl;a=0; 
									
									
									
									break;
									case 2:cout<<"Producto 2"<<endl;
									break;
									case 3:cout<<"Producto 3"<<endl;
									break;
									case 4:cout<<"Producto 4"<<endl;
									break;
									case 5:a=1;
									break;
									case 6:a=0;
									break;
									default:cout<<"Opcion invalida"<<endl;cout<<endl;
								}
								z=a;
							}
							break;
							case 2:cout<<"Bonos"<<endl;break;case 3:cout<<"Otros"<<endl;break;case 4:z==0;
							default:cout<<"Opcion invalida"<<endl;
						}
					}
					z=0;
					break;
					case 2:cout<<"Egresos"<<endl;
					z=0;
					break;
					case 3:cout<<""<<endl;
					z=0;
					break;
					case 4: z=0;
					default:cout<<"Opcion no valida"<<endl;
				}
			}
			break;
			case 2:cout<<"Recursos Materiales"<<endl;
			
			
			
			
			
			
			cout<<endl;
			z=0;
			break;
			case 3:cout<<"Recursos Humanos"<<endl;
			
			
			
			
			
			
			cout<<endl;z=0;break;
			case 4:cout<<"Recursos Tecnologicos"<<endl;
			
			
			
			
			cout<<endl;z=0;break;
			default:cout<<"Error al ingrresar datos, por favor vuelve a intentarlo"<<endl;
		}	
	}
	
	
	return 0;
}

void escribir(){   
	
	ofstream archivo;   ///principio del main
	string newvariable;  //crear el vector y usar getline(cin,vector[0]), principio del main
	cout<<"Digita el nombre de una nueva variable"<<endl; //cuando se necesite
	getline(cin,newvariable);  //// implementar
	//archivo.open("Datmanzanas.txt",ios::out); //Se abre el archivo
	//para que elegir la ubicacion del archivo, entonces
	//C://Users//El que todo lo puede//Desktop//Programación 1//Pruebas de archivos txt//Datmanzanas
	archivo.open(newvariable.c_str(),ios::out); //archivo.open();al final.
	//if(archivo.fail()){
	//	cout<<"No se pudo abrir el archivo"<<endl;
	//	exit(1);
	//}
	archivo<<"Yogures de fresa"<<endl;      
	archivo<<"        $400 unidades "<<endl;   
	archivo.close();//Cerrar el archivo   
	
}

