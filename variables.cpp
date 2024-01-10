#include <iostream>
using namespace std;
//tipo de variable 

struct vector{
    float x,y,z;
}; 

struct nombre{
    string nombreA;
    string apellidoA;
}; 

struct Jugador{
    nombre nombres;
    vector posicion;
};

int main(){
    vector ope;
    ope.x = 32,ope.y = 23,ope.z = 56;
    cout << ope.x << " " << ope.y << " " << ope.z << endl;
    Jugador yo;
    yo.nombres.nombreA = "Atzel", yo.nombres.apellidoA = "Amarillo";
    yo.posicion.x = 22,yo.posicion.y = 45,yo.posicion.z = 89;
    cout << yo.nombres.nombreA << " " << yo.nombres.apellidoA << endl;
    cout << yo.posicion.x << " " << yo.posicion.y << " " << yo.posicion.z << endl;
    return 0;
}