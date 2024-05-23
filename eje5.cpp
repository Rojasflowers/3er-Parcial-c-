#include <iostream>
using namespace std;
int main()
{
    float tempc, tempf;
    cout<<" Ingrese la temperatura que desee convertir ";
    cin>>tempf;
    tempc=(tempf-32)*5/9;
    cout<<" La temperatura "<<tempf<<" equivale a: "<<tempc;
    return 0;
}