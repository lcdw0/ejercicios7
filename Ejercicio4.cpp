#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Articulo {
    int codigo;
    int nivelMinimo;
    int nivelActual;
    string proveedor;
    double precio;
};

void verificarExistencia(vector<Articulo>& articulos) {
    cout << "Articulos con nivel de existencia por debajo del minimo:" << endl;
    for (const auto& articulo : articulos) {
        if (articulo.nivelActual > articulo.nivelMinimo){
            cout << "Codigo: " << articulo.codigo << " - Proveedor: " << articulo.proveedor << " - Nivel actual: " << articulo.nivelActual << " - Todo en orden" << endl; 
        }
        else if (articulo.nivelActual < articulo.nivelMinimo) {
            cout << "Codigo: " << articulo.codigo << " - Proveedor: " << articulo.proveedor << " - Nivel actual: " << articulo.nivelActual << " - Alerta: Hacer Pedido" << endl;
        }
    }
}

int main() {
    vector<Articulo> articulos = {
        {1, 10, 5, "Proveedor 1", 10.99},
        {2, 20, 15, "Proveedor 2", 5.99},
        {3, 30, 25, "Proveedor 3", 7.99},
        {4, 40, 35, "Proveedor 4", 12.99},
        {5, 50, 45, "Proveedor 5", 9.99},
        {6, 10, 13, "Proveedor 6", 8.99}
    };

    verificarExistencia(articulos);

    return 0;
}