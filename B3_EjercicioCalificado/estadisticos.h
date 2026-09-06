//
// Created by Carlos Palomino Vidal on 6/09/26.
//

#ifndef ESTADISTICOS_H
#define ESTADISTICOS_H

// ---- Herramientas vistas en clase ----

// Muestra los n elementos del arreglo separados por espacio.
void imprimir(int* arr, int n);

// Devuelve un arreglo nuevo en el heap con los mismos valores.
int* copiar(int* arr, int n);

// Ordena el arreglo de menor a mayor, modificando el arreglo recibido.
void ordenar(int* arr, int n);

// Cuenta cuantas veces aparece el valor dentro del arreglo.
int contarFrecuencia(int* arr, int n, int valor);

// ---- Estadisticos que debe implementar ----

// Reserva un arreglo dinamico de n numeros aleatorios entre 1 y 30.
int* generar(int n);

// Suma de todos los elementos entre la cantidad de elementos.
double media(int* arr, int n);

// Valor que aparece con mayor frecuencia.
int moda(int* arr, int n);

// Valor central del arreglo ordenado. Si n es par, promedio de los dos centrales.
double mediana(int* arr, int n);

#endif