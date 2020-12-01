#include<iostream>
#include<math.h>
using namespace std;
//constante pi =3.14159265
void ref(double &x,double &y);
int main() {
    double sal1,sal2; 
	ref(sal1,sal2);
    cout<<"La coordenadas cartesianas son: "<<"(x = "<<sal1<<",y = "<<sal2<<")"<<endl;
    return 0;
}
void ref(double &x,double &y){
	double r,t;
	long double p;
    p=3.141592653589;
    cout<<"Coordenadas polares a rectangulares"<<endl;
    cout << "Coordenada R: ";cin >> r;
	cout << "Coordenada Theta en rad: ";cin >> t;cout<<endl;
    cout<<"Cordenadas polares"<<"(r = "<<r<<","<<"theta = "<<t<<")"<<endl;cout<<endl;
	x = r*cos(t*(p/180));
    y = r*sin(t*(p/180));
}