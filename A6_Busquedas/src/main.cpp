#include <iostream>

#include "../include/busqueda.h"
#include <iostream>

using namespace std;

#include <cstdlib>

int main() {
    int n;
    int dato;

    cout << "Numero de elementos : ";
    cin >> n;

    int* arr = generar(n);

    cout << "\nArray" << endl;
    imprimir(arr, n);

    cout << "\nDato a buscar : ";
    cin >> dato;

    int cantidad;
    int* posiciones = buscarPosiciones(arr, n, dato, cantidad);

    if (cantidad == 0) {
        cout << "\nEl dato " << dato << " no se encuentra en el arreglo." << endl;
    } else {
        cout << "\nEl dato " << dato << " aparece " << cantidad << " veces" << endl;
        cout << "Posiciones" << endl;
        imprimir(posiciones, cantidad);
    }

    delete[] posiciones;
    delete[] arr;

    return 0;
}