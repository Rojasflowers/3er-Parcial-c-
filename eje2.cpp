#include <iostream>
using namespace std;
int main ()
{
float pro,uni,sub = 0, pre,desc,iva,tot;
cin>>uni;
cout<<"cantidad de unidades "<<uni;
cin>>pre;
cout<<" precio: "<<pre;
sub=uni*pre;

if (sub<1000)
{
desc=sub*0;
 cout<<"el descuento es de: "<<desc<<endl;
 }

if (sub>1000)
{
desc=sub*0.1;
 cout<<"el descuento es de: "<<desc<<endl;
}

if (sub>2000)
{
desc=sub*0.2;
 cout<<"el descuento es de: "<<desc<<endl;
 }

if (sub>3000)
{
desc=sub*0.3;
 cout<<"el descuento es de: "<<desc<<endl;
 }
iva=sub*0.16;
tot=sub-desc+iva;
 cout<<"el total es: "<<tot<<endl;
    return 0;
}