#ifndef BUSQUEDA_H
#define BUSQUEDA_H

// Crea un arreglo dinamico de n numeros aleatorios entre 1 y 20.
int* generar(int n);

void imprimir(int* arr, int n);

// Cuenta cuantas veces aparece el dato dentro del arreglo.
int contarOcurrencias(int* arr, int n, int dato);

// Crea un arreglo nuevo con las posiciones donde aparece el dato.
// Devuelve por referencia la cantidad de posiciones encontradas.
int* buscarPosiciones(int* arr, int n, int dato, int& cantidad);

#endif