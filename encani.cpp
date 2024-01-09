#include <iostream>
using namespace std;

class fecha {
private: 
    int dia, mes, anio;

public: 
    fecha(int, int , int);  // Constructor 1
    fecha(long);  // Constructor 2
    void mostrar();
};

fecha::fecha(int d, int m, int a){
    anio = a;
    mes = m;
    dia = d;
}

fecha::fecha(long fecha) {
    anio = static_cast<int>(fecha / 10000);
    mes = static_cast<int>((fecha / 100) % 100);  // Calcular el mes correctamente
    dia = static_cast<int>(fecha % 100);
}


void fecha::mostrar() {
    cout << "La fecha es: " << dia << "/" << mes << "/" << anio << endl;
}

int main() {
    fecha hoy(9, 1, 2024);
    fecha ayer(20240108);
    hoy.mostrar();
    ayer.mostrar();
    return 0;
}
