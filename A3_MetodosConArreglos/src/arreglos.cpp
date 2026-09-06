//
// Created by Carlos Palomino Vidal on 6/09/26.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/arreglos.h"

using namespace std;

//Los arreglos no se pasan por valor, se pasan por referencia, es decir,
//se pasa la direccion de memoria del arreglo.
//Por eso no es necesario usar & en el parametro de la funcion.

int *generar(int n) {
    int *arr = new int[n];
    srand(time(nullptr));

    for(int i=0; i<n; i++) {
        arr[i] = rand() % 100 + 1;
    }
    return arr;
    //al terminar arr si muere pero la direccion de memoria que contiene sigue viva,
    //por eso se puede retornar
}

void imprimir(int* arr, int n) {
    //al pasar el arreglo a la funcion,
    //se pasa la direccion de memoria del primer elemento del arreglo
    //la funcion no sabe el tamaño del arreglo, por eso se pasa como parametro
    //por que la longitud seria el tamaño de la direccion

    for(int i=0; i<n; i++) {
        cout << "Elemento " << i+1 << ": " << arr[i] << endl;
    }
}
