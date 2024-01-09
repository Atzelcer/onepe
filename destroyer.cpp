#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
    //atributos 
    private : 
        int edad;
        string nombre;
    public :  //metodos
       Persona(int,string);
        void leer();
        void correr();
};

//constructor , nos sirve para inicializar los atributos 
Persona::Persona(int e,string nom){
    edad = e ;
    nombre = nom ;
}

void Persona::leer(){
    cout << "Soy "+ nombre + " tengo " << edad << " y estoy leyendo un libro " << endl; 
}

void Persona::correr(){
    cout << "Soy "+ nombre + "tengo " << edad << " y estoy corriendo una maraton " << endl;
}

int main(){
    int p;
    string n;
    cout << "Inserte su nombre : ";cin >> n ;
    cout << "Inserte su edad : ";cin >> p ;
    Persona pa(p,n);
    pa.leer();
    pa.correr();
    system("pause");
    return 0;
}