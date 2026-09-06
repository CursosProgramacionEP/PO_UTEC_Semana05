#include "multiplos.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int* generar(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000;
    return arr;
}

void imprimir(int* arr, int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int contarMultiplos(int* arr, int n, int d) {
    int cont = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % d == 0)
            cont++;
    return cont;
}

// Se recorre dos veces: primero para saber cuanto espacio reservar,
// despues para copiar los elementos que cumplen la condicion.
int* filtrarMultiplos(int* arr, int n, int d, int& cantidad) {
    cantidad = contarMultiplos(arr, n, d);

    if (cantidad == 0)
        return nullptr;

    int* nuevo = new int[cantidad];
    int j = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] % d == 0)
            nuevo[j++] = arr[i];

    return nuevo;
}