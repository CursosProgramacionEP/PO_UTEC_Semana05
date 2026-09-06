#include <iostream>
using namespace std;

int main() {
    cout << "Ingrese la cantidad de notas a ingresar: " << endl;
    int n;
    cin >> n;

    int *notas=new int[n]; // Creación de arreglo dinámico

    // Ingreso de notas
    for(int i=0; i<n; i++) {
        cout << "Ingrese la nota " << i+1 << ": ";
        cin >> notas[i];
    }

    // Imprimir las notas
    for(int i=0; i<n; i++) {
        cout << "Nota " << i+1 << ": " << notas[i] << endl;
    }

    // Liberar la memoria
    delete[] notas;
    notas=nullptr;

    return 0;
     // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}