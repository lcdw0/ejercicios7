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

void mostrarAgenda() {
    cout << "Agenda de direcciones: \n" << endl;
    for (const auto& dir : agenda) {
        cout << "Nombre: " << dir.nombre << endl;
        cout << "Edad: " << dir.edad << endl;
        cout << "Direccion: " << dir.direccion << endl;
        cout << "Ciudad: " << dir.ciudad << endl;
        cout << "Telefono: " << dir.telefono << endl;
        cout << endl;
    }
}

int main() {
    int opcion;
    do {
        cout << "Menu:" << endl;
        cout << "1. Agregar direccion" << endl;
        cout << "2. Mostrar agenda" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarDireccion();
                break;
            case 2:
                mostrarAgenda();
                break;
            case 3:
                cout << "Adios." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion!= 3);

    return 0;
}