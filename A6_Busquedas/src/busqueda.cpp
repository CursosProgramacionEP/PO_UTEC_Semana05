//
// Created by Carlos Palomino Vidal on 6/09/26.
//

#include "../include/busqueda.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int* generar(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = 1 + rand() % 20;
    return arr;
}

void imprimir(int* arr, int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int contarOcurrencias(int* arr, int n, int dato) {
    int cont = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == dato)
            cont++;
    return cont;
}

// Se recorre dos veces: primero para saber cuanto espacio reservar,
// despues para guardar los indices donde aparece el dato.
int* buscarPosiciones(int* arr, int n, int dato, int& cantidad) {
    cantidad = contarOcurrencias(arr, n, dato);

    if (cantidad == 0)
        return nullptr;

    int* posiciones = new int[cantidad];
    int j = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] == dato)
            posiciones[j++] = i;

    return posiciones;
}