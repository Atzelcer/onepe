#include <iostream>
using namespace std;

struct alumnos {
    string name, lastName;
};

struct numDate {
    int anios, numeroLista;
};

enum maximoStudens {
    max = 3  // Cambiar '=' por ';'
};

class clase {
    alumnos two;
    numDate three;

public:
    void lectura();
    void proceso();
    void notas();
};

int main() {
    clase one;
    one.lectura();
    one.proceso();
    one.notas();
    return 0;
}

void clase::lectura() {
    cout << "Ingresa el nombre del estudiante: ";
    cin >> two.name;
    cout << "Ingresa el apellido del estudiante: ";
    cin >> two.lastName;
    cout << "Ingresa el número del estudiante: ";
    cin >> three.numeroLista;
    cout << "Ingresa la edad del estudiante: ";
    cin >> three.anios;
}

void clase::proceso() {
    // Agrega cualquier lógica de procesamiento aquí
}

void clase::notas() {
    // Agrega cualquier lógica de notas aquí
}
