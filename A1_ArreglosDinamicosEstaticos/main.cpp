#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main() {
    //Creacion de arreglos estaticos, se crea en el stack y no se puede cambiar su tamaño
    int edades[]={1, 2, 3, 4, 5};

    //Recorrido de arreglos estaticos
    for(int i=0; i<5; i++){
        cout<<edades[i]<<endl;
    }

    //ingreso de datos  en el arreglo
    for(int i=0; i<5; i++) {
        cout<<"Ingrese un numero: ";
        cin>>edades[i];
    }

    //ingesando numeros aletorios al arreglo
    srand(time(nullptr)); // semilla
    for(int i=0; i<5; i++) {
        edades[i]=rand() % 100 + 1;
    }

    // Imprimir el arreglo
    for(int i=0; i<5; i++) {
        cout<<"Numero aleatorio "<<i+1<<": "<<edades[i]<<endl;
    }

    return 0;
}

