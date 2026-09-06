#include <iostream>
#include "../include/arreglos.h"

int main() {

    int n = 5;

    int* datos = generar(n);
    imprimir(datos, n);

    // main se quedo con el puntero, asi que main libera el bloque.
    delete[] datos;
    return 0;
     // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}