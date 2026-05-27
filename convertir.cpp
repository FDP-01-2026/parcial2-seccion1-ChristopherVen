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
int e;
    cout<<"Ingrese numero"<<endl;
    cin>>numero;
    e=numero*100;
    cout<<"Equivale a:"<<e<<" Centimetro"<<endl;
    break;
case 2:
float m;
int a;
    cout<<"Ingrese numero"<<endl;
    cin>>m;
    a=m*1000;
    cout<<"Equivale a:"<<a<<" metro"<<endl;
    break;
case 3:
float k;
int o;
    cout<<"Ingrese numero"<<endl;
    cin>>k;
    o= k*0.453592;
    cout<<"Equivale a:"<<o<<" Kilogramo"<<endl;
    break;
case 4:
float far;
int i;
    cout<<"Ingrese numero"<<endl;
    cin>>far;
    i=(far*9/5)+32;
    cout<<"Equivale a:"<< i<<" Fahrenheit"<<endl;
    break;

}







    return 0;

}