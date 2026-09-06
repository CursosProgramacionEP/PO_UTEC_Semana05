#ifndef HERRAMIENTAS_H
#define HERRAMIENTAS_H

void imprimir(int* arr, int n);

// Devuelve un arreglo nuevo en el heap con los mismos valores.
int* copiar(int* arr, int n);

// Ordena el arreglo de menor a mayor, modificando el arreglo recibido.
void ordenar(int* arr, int n);

// Cuenta cuantas veces aparece el valor dentro del arreglo.
int contarFrecuencia(int* arr, int n, int valor);

#endif