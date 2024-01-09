#include <iostream>
using namespace std;


class Alumno2 {
    public:
        string nombre,carnet;
        constructor(){//atributos - caracteristicas - propiedades
            this -> nombre = "";
            this -> carnet = "";
        }

        void Insertar(string n,string c);
        string Imprimir(); //metodo Imprimir 
};

int main (){
    Alumno2 al;
    cout << "Inserte el nombre del Alumno: ";cin >> al.nombre;
    cout << "Inserte el numero de carnet: ";cin >> al.carnet;
    cout << al.Imprimir();
}

 void Alumno2::Insertar(string n,string c){//metodos - funciones - acciones 
    this -> nombre = n;
    this -> carnet = c;
}


string Alumno2::Imprimir(){
    return "Nombre: " + this -> nombre  +" -  Carnet: " + this -> carnet + "\n";
}