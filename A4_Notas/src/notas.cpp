//
// Created by Carlos Palomino Vidal on 6/09/26.
//

#include "../include/notas.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>

int* generar(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 21;
    return arr;
}

void imprimir(int* arr, int n) {
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

double promedio(int* arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += arr[i];
    return (double)suma / n;
}

void imprimirSobrePromedio(int* arr, int n) {
    double prom = promedio(arr, n);
    for (int i = 0; i < n; i++)
        if (arr[i] > prom)
            std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int mayorNota(int* arr, int n) {
    int mayor = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mayor)
            mayor = arr[i];
    return mayor;
}

int menorNota(int* arr, int n) {
    int menor = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < menor)
            menor = arr[i];
    return menor;
}

// Se acumula solo lo que no sea la menor nota y se cuenta cuantos
// elementos quedaron, porque puede repetirse varias veces.
double promedioSinMenor(int* arr, int n) {
    int menor = menorNota(arr, n);
    int suma = 0;
    int cantidad = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != menor) {
            suma += arr[i];
            cantidad++;
        }
    }

    if (cantidad == 0)
        return 0;

    return (double)suma / cantidad;
}
