#include<iostream>
#include<string>
using namespace std;
//Desarrollar una estructura estudiante; que contenga nombr, edad, ID,semestre academico
struct estudiante{
	string nombre;
	int ID;
	int edad;
	int semestreacademico;
};
int main(){
	
	estudiante var[4];
	
	var[0].nombre= "Luis";
	var[0].ID=1088034883;
	var[0].edad=22;
	var[0].semestreacademico=6;
	for(int i=0;i<1;i++){
		cout<<"Nombre = "<<var[i].nombre<<endl;
		cout<<"ID = "<<var[i].ID<<endl;
		cout<<"Edad	= "<<var[i].edad<<endl;
		cout<<"Semestre academic0 = "<<var[i].semestreacademico<<endl;
	}
	return 0;
}