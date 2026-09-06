//
// Created by Carlos Palomino Vidal on 6/09/26.
//

#include "../include/herramientas.h"
#include <iostream>

using namespace std;

void imprimir(int* arr, int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Se reserva un bloque nuevo y se pasan los valores uno por uno.
// Copiar el puntero no sirve: los dos apuntarian al mismo bloque.
int* copiar(int* arr, int n) {
    int* nuevo = new int[n];
    for (int i = 0; i < n; i++)
        nuevo[i] = arr[i];
    return nuevo;
}

// Ordenamiento por insercion: cada elemento se abre paso hacia
// la izquierda hasta encontrar su lugar.
void ordenar(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int actual = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > actual) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = actual;
    }
}

int contarFrecuencia(int* arr, int n, int valor) {
    int frec = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == valor)
            frec++;
    return frec;
}
