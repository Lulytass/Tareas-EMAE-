#include <iostream>

using namespace std;
#include "Empleado.h"
#include<iomanip>

int main()
{
    Empleado e1,e2("Juan",25879666,98000,3);
    char n[30];
    int d,a;
    float sb;
    cout<<"Ingrese el nombre: ";
    cin>>n;
    cout<<"Ingrese el dni: ";
    cin>>d;
    cout<<"Ingrese el sueldo: ";
    cin>>sb;
    cout<<"Ingrese la antigŁedad: ";
    cin>>a;
    e1.setNombre(n);
    e1.setDni(d);
    e1.setSueldo(sb);
    e1.setAntig(a);
    cout<<"Datos del empleado 1"<<endl;
    e1.mostrar();
    cout<<"El sueldo a cobrar es: "<<fixed<<setprecision(2)<<e1.sueldoACobrar()<<endl;
    cout<<"Datos del empleado 2"<<endl;
    e2.mostrar();
    cout<<"El sueldo a cobrar es: "<<fixed<<setprecision(2)<<e2.sueldoACobrar()<<endl;
    return 0;
}
