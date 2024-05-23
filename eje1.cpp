# include <iostream>
using namespace std;
int main()
{
    int producto, unidad, subtotal, precio;
    cin>>unidad;
    cout<<" Cantidad de unidades: "<<unidad;
    cin>>precio;
    subtotal=unidad*precio;
    cout<<" Subtotal: "<<subtotal;
    return 0;
}