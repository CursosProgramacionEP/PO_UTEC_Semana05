#include <iostream>
#include "../include/herramientas.h"
#include <iostream>

using namespace std;

int main() {
    int n = 6;

    int* datos = new int[n];
    datos[0] = 7;
    datos[1] = 3;
    datos[2] = 7;
    datos[3] = 1;
    datos[4] = 9;
    datos[5] = 3;

    cout << "Arreglo original:" << endl;
    imprimir(datos, n);

    int* copia = copiar(datos, n);

    ordenar(copia, n);

    cout << "\nCopia ordenada:" << endl;
    imprimir(copia, n);

    cout << "\nEl original sigue igual:" << endl;
    imprimir(datos, n);

    cout << "\nEl 7 aparece " << contarFrecuencia(datos, n, 7) << " veces" << endl;
    cout << "El 3 aparece " << contarFrecuencia(datos, n, 3) << " veces" << endl;
    cout << "El 5 aparece " << contarFrecuencia(datos, n, 5) << " veces" << endl;

    delete[] copia;
    delete[] datos;

    return 0;
}