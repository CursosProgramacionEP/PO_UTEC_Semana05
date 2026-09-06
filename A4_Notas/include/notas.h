//
// Created by Carlos Palomino Vidal on 6/09/26.
//

#ifndef A4_NOTAS_NOTAS_H
#define A4_NOTAS_NOTAS_H
int* generar(int n);

void imprimir(int* arr, int n);

double promedio(int* arr, int n);

void imprimirSobrePromedio(int* arr, int n);

int mayorNota(int* arr, int n);

int menorNota(int* arr, int n);

// Promedio calculado ignorando todas las ocurrencias de la menor nota.
double promedioSinMenor(int* arr, int n);

#endif //A4_NOTAS_NOTAS_H
