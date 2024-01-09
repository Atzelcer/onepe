#include <iostream>
using namespace std;

class cuadrado {
    public :
    
        double base, altura;//atiributos

        constructor(double a, double b){
            this -> base = a;
            this -> altura = b;
        }

    void calcularArea(){
        cout << "El area del cuadrado es ==> "<< this -> base * this -> altura << endl;
    }
};

int main (){
    cuadrado op;
    cout << "Inserta la base de la figura : "; cin >> op.base;
    cout << "Inserte la alturea de la figura : "; cin >> op.altura;
    op.calcularArea();
}