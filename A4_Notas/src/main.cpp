#include <iostream>
#include "../include/notas.h"
using namespace std;
/*
* Escriba un programa que permita leer como dato un número entero mayor a 15, el cual representará el número de alumnos de un salón de clase.
El programa deberá llenar un array con N números aleatorios, para luego:

Imprimir solo las notas que están por encima del promedio
Imprimir la mayor nota
Imprimir el promedio eliminando la menor nota. Si el valor de la nota menor se repite se deberá eliminar todas las ocurrencias y realizar el cálculo del promedio con las notas restantes.
Utilice funciones y punteros dinámicos

 */

int main() {
    int n;

    do {
        cout << "Ingrese el numero de alumnos (mayor a 15): ";
        cin >> n;
    } while (n <= 15);

    int* notas = generar(n);

    cout << "\nNotas generadas:" << endl;
    imprimir(notas, n);

    cout << "\nPromedio: " << promedio(notas, n) << endl;

    cout << "\nNotas por encima del promedio:" << endl;
    imprimirSobrePromedio(notas, n);

    cout << "\nMayor nota: " << mayorNota(notas, n) << endl;

    cout << "\nMenor nota: " << menorNota(notas, n) << endl;
    cout << "Promedio sin la menor nota: " << promedioSinMenor(notas, n) << endl;

    delete[] notas;

    return 0;
     // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}