#ifndef MULTIPLOS_H
#define MULTIPLOS_H

// Crea un arreglo dinamico de n numeros aleatorios entre 0 y 999.
int* generar(int n);

void imprimir(int* arr, int n);

// Cuenta cuantos elementos son multiplos de d.
int contarMultiplos(int* arr, int n, int d);

// Crea un arreglo nuevo solo con los multiplos de d.
// Devuelve por referencia la cantidad de elementos del arreglo creado.
int* filtrarMultiplos(int* arr, int n, int d, int& cantidad);

#endif