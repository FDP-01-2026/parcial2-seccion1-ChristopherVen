#include <iostream>
using namespace std;

int main (){

    int hora,pago;
cout<< "Bienvenido"<<endl;
cout<<"Ingrese las horas de trabaoj:"<<endl;
cin>>hora;
cout<<"Ingrese el pago por horas"<<endl;
cin>>pago;

if (pago>=0)
{
    cout<<"Salario medio"<<endl;
}
else if (pago>=40)
{
    cout<<"Salario Alto"<<endl;}
else if (pago<=0)
{
    cout<<"salario bajo"<<endl;
}
else{
    cout<<"Salario Invalido"<<endl;

}

cout<<"Salario semanal:"<<hora<<endl;
cout<<"Clasificacion:"<<pago<<endl;
    


return 0;
}