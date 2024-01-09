#include <iostream>
using namespace std;


struct nacamas{
    string nombre;
    int fuerza,inteligencia;
};


struct arco{
    int grado;
    };

class onepice{
    public : 
        nacamas op;
        arco acu;  
        void lectura();
};

void onepice::lectura() {
    cout << "Nombre del personaje : ";cin >> op.nombre;
    cout << "Fuerza del personaje : ";cin >> op.fuerza;
    cout << "Inteligencia del personaje : ";cin >> op.inteligencia;
    cout << "En que arco se encuentra : ";cin >> acu.grado;
}


int main() {
    onepice love;
    love.lectura();
    return 0;
        