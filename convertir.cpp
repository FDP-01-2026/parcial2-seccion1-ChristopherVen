#include<iostream>
using namespace std;

int main(){
 int menu;

cout<<"Menu"<<endl;
cout<<"1-Convertir metros a centímetros"<<endl;
cout<<"2-Convertir kilómetros a metros"<<endl;
cout<<"3-Convertir libras a kilogramos"<<endl;
cout<<"4-Convertir grados Celsius a Fahrenheit"<<endl;
cin>>menu;

switch (menu)
{
case 1:
float numero;
    cout<<"Ingrese numero"<<endl;
    cin>>numero;
    cout<<"Equivale a:"<<numero*100<<" Centimetro"<<endl;
    break;
case 2:
float m;
    cout<<"Ingrese numero"<<endl;
    cin>>m;
    cout<<"Equivale a:"<<m*1000<<" metro"<<endl;
    break;
case 3:
float k;
    cout<<"Ingrese numero"<<endl;
    cin>>k;
    cout<<"Equivale a:"<<k*0.453592<<" Kilogramo"<<endl;
    break;
case 4:
float far;
int i;
    cout<<"Ingrese numero"<<endl;
    cin>>far;
    i=(far*9/5)+32;
    cout<<"Equivale a:"<< i<<" Fahrenheit"<<endl;
    break;
default:
cout<<"No exite"<<endl;
    break;
}







    return 0;

}