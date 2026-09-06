#include "multiplos.h"
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Numero de elementos : ";
    cin >> n;

    int* arr = generar(n);

    cout << "\nArray" << endl;
    imprimir(arr, n);

    int cant5;
    int* mult5 = filtrarMultiplos(arr, n, 5, cant5);

    int cant7;
    int* mult7 = filtrarMultiplos(arr, n, 7, cant7);

    cout << "\nMultiplos de cinco" << endl;
    imprimir(mult5, cant5);

    cout << "\nMultiplos de siete" << endl;
    imprimir(mult7, cant7);

    delete[] arr;
    delete[] mult5;
    delete[] mult7;

    return 0;
}