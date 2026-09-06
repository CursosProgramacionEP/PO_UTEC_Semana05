//
// Created by Carlos Palomino Vidal on 6/09/26.
//

#include "../include/estadisticos.h"


#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// ---- Herramientas vistas en clase ----

void imprimir(int* arr, int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int* copiar(int* arr, int n) {
    int* nuevo = new int[n];
    for (int i = 0; i < n; i++)
        nuevo[i] = arr[i];
    return nuevo;
}

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

// ---- Estadisticos ----

int* generar(int n) {
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = 1 + rand() % 30;
    return arr;
}

double media(int* arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += arr[i];
    return (double)suma / n;
}

// Se le pregunta a cada valor cuantas veces aparece y se guarda
// el que tenga la mayor frecuencia.
int moda(int* arr, int n) {
    int valorModa = arr[0];
    int mayorFrec = 0;

    for (int i = 0; i < n; i++) {
        int frec = contarFrecuencia(arr, n, arr[i]);

        if (frec > mayorFrec) {
            mayorFrec = frec;
            valorModa = arr[i];
        }
    }

    return valorModa;
}

// La posicion central solo tiene sentido con el arreglo ordenado,
// por eso se ordena una copia y no el arreglo original.
double mediana(int* arr, int n) {
    int* orden = copiar(arr, n);
    ordenar(orden, n);

    double resultado;

    if (n % 2 == 1)
        resultado = orden[n / 2];
    else
        resultado = (orden[n / 2 - 1] + orden[n / 2]) / 2.0;

    delete[] orden;

    return resultado;
}

double* desviaciones(int* arr, int n) {
    double prom = media(arr, n);
    double* d = new double[n];

    for (int i = 0; i < n; i++)
        d[i] = fabs(arr[i] - prom);

    return d;
}

double desviacionMedia(int* arr, int n) {
    double prom = media(arr, n);
    double suma = 0;

    for (int i = 0; i < n; i++)
        suma += fabs(arr[i] - prom);

    return suma / n;
}

double varianza(int* arr, int n) {
    double prom = media(arr, n);
    double suma = 0;

    for (int i = 0; i < n; i++)
        suma += (arr[i] - prom) * (arr[i] - prom);

    return suma / n;
}

double desviacionEstandar(int* arr, int n) {
    return sqrt(varianza(arr, n));
}