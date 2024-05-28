#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Alumno {
    int carnet;
    string nombre;
    string apellidos;
    double notaFinal;
};

void mostrarAlumnos(vector<Alumno>& alumnos) {
    cout << "Lista de alumnos:" << endl;
    for (const auto& alumno : alumnos) {
        cout << "Carnet: " << alumno.carnet << " - Nombre: " << alumno.nombre << " " << alumno.apellidos << " - Nota final: " << alumno.notaFinal << endl;
    }
}

int main() {
    vector<Alumno> alumnos = {
        {101, "Juan", "Perez Garcia", 85.0},
        {102, "Maria", "Gonzalez Rodriguez", 92.0},
        {103, "Pedro", "Lopez Martinez", 78.0},
        {104, "Ana", "Diaz Sanchez", 95.0},
        {105, "Carlos", "Hernandez Lopez", 88.0}
    };

    mostrarAlumnos(alumnos);

    return 0;
}