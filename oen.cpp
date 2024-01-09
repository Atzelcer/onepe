#include <iostream>
using namespace std;

class triangulo{
private: 
    int largo,ancho;
    string tipo;
public:
    triangulo(int l = 0  ,int a = 0 ,const string& t = "");
    void perimetro();
    void area();
    void insertar();
    void Mtipo();
};


triangulo::triangulo(int l,int a,const string& t): largo(l), ancho(a),tipo(t){}

void triangulo::insertar(){
    cout << "Inserte el largo del triangulo : ";cin >> largo;
    cout << "Inserte el ancho del triangulo : ";cin >> ancho;
    cout << "Inserte el tipo del triangulo : ";cin >> tipo;
}

void triangulo::area(){
    cout << "El area del triangulo es ==> "<< (largo * ancho) /2 << endl;
}

void triangulo::perimetro(){
    cout << "El perimetro del triangulo es ==> "<< largo * 3<< endl; 
}

void triangulo::Mtipo(){
    cout << "El tipo de es ==> "<< tipo << endl;
}

int main(){
    triangulo arco;
    arco.insertar();
    arco.area();
    arco.perimetro();
    arco.Mtipo();
    return 0;
}