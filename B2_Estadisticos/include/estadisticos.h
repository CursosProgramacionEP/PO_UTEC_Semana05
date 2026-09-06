//
// Created by Carlos Palomino Vidal on 6/09/26.
//

#ifndef ESTADISTICOS_H
#define ESTADISTICOS_H

// ---- Herramientas vistas en clase ----

void imprimir(int* arr, int n);

int* copiar(int* arr, int n);

void ordenar(int* arr, int n);

int contarFrecuencia(int* arr, int n, int valor);

// ---- Estadisticos ----

int* generar(int n);

double media(int* arr, int n);

int moda(int* arr, int n);

double mediana(int* arr, int n);

double* desviaciones(int* arr, int n);

double desviacionMedia(int* arr, int n);

double varianza(int* arr, int n);

double desviacionEstandar(int* arr, int n);

#endif