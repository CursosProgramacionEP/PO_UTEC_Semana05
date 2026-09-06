#include <iostream>
#include "../include/estadisticos.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

#include "estadisticos.h"
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Numero de elementos : ";
    cin >> n;

    int* arr = generar(n);

    cout << "\nArray" << endl;
    imprimir(arr, n);

    cout << "\nMedia               : " << media(arr, n) << endl;
    cout << "Moda                : " << moda(arr, n) << endl;
    cout << "Mediana             : " << mediana(arr, n) << endl;
    cout << "Desviacion media    : " << desviacionMedia(arr, n) << endl;
    cout << "Varianza            : " << varianza(arr, n) << endl;
    cout << "Desviacion estandar : " << desviacionEstandar(arr, n) << endl;

    double* d = desviaciones(arr, n);

    cout << "\nDesviacion de cada elemento respecto a la media" << endl;
    for (int i = 0; i < n; i++)
        cout << d[i] << " ";
    cout << endl;

    cout << "\nEl array original no fue modificado" << endl;
    imprimir(arr, n);

    delete[] d;
    delete[] arr;

    return 0;
}