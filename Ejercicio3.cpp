#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Empleado {
    int dni;
    string nombre;
    double salario;
};

void categorizarSalarios(vector<Empleado>& empleados) {
    double salarioMinimo = 20000.0; // Salario minimo para considerar "Bajo"
    double salarioMedio = 50000.0; // Salario medio para considerar "Medio"

    cout << "Salarios categorizados:" << endl;
    for (const auto& empleado : empleados) {
        if (empleado.salario < salarioMinimo) {
            cout << "DNI: " << empleado.dni << " - Salario: " << empleado.salario << " - Categoria: Bajo" << endl;
        } else if (empleado.salario < salarioMedio) {
            cout << "DNI: " << empleado.dni << " - Salario: " << empleado.salario << " - Categoria: Medio" << endl;
        } else {
            cout << "DNI: " << empleado.dni << " - Salario: " << empleado.salario << " - Categoria: Alto" << endl;
        }
    }
}

int main() {
    vector<Empleado> empleados = {
        {12345678, "Juan Pérez", 30000.0},
        {23456789, "María González", 60000.0},
        {34567890, "Pedro Rodríguez", 45000.0},
        {45678901, "Ana López", 25000.0},
        {56789012, "Carlos Martínez", 70000.0}
    };

    categorizarSalarios(empleados);

    return 0;
}