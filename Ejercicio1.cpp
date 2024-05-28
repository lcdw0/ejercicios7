#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Direccion {
    string nombre;
    int edad;
    string direccion;
    string ciudad;
    string telefono;
};

vector<Direccion> agenda;

void agregarDireccion() {
    Direccion dir;
    cout << "Ingrese el nombre: ";
    cin >> dir.nombre;
    cout << "Ingrese la edad: ";
    cin >> dir.edad;
    cout << "Ingrese la direccion: ";
    cin >> dir.direccion;
    cout << "Ingrese la ciudad: ";
    cin >> dir.ciudad;
    cout << "Ingrese el telefono: ";
    cin >> dir.telefono;

    agenda.push_back(dir);
    cout << "Direccion agregada con exito." << endl;
}

int main() {
    agregarDireccion();
    return 0;
}