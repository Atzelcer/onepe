#include <iostream>
using namespace std;

struct Mecanismosdebatalla{int fuerza,velocidad;};

struct fijacionDeNombres{string nombre,apellidos;};

class jugador{
    public : 
    Mecanismosdebatalla caracteristicasjudador;
    fijacionDeNombres identificador;
};
int main(){
    jugador principal;
    principal.caracteristicasjudador.fuerza = 100;
    principal.caracteristicasjudador.velocidad = 100;

    cout << "Cual es tu nombre : "; cin >> principal.identificador.nombre;
    cout << "Cual es tu apellido : ";cin >>  principal.identificador.apellidos;

    cout <<"La fuerza de tu personaje es ==> "<< principal.caracteristicasjudador.fuerza << endl;
    cout <<"La velocidad de tu personaje es ==> "<< principal.caracteristicasjudador.velocidad << endl;
    cout << "Nombre: " << principal.identificador.nombre << endl;
    cout << "Apellido: " << principal.identificador.apellidos << endl;

    return 0;
}