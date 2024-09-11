/**
  16) Se ingresa por teclado un vector de 10 elementos
  todos distintos entre sí. Se pide eliminar el valor máximo
  y desplazar todos los elementos un lugar.

Ejemplo:

V={1 3 9 1 4 6} quedará: V={1 3 1 4 6}
*/
#include <iostream>
using namespace std;

int main(){
    const int TAM = 6;
    int vec[TAM], i;
    int posMaximo;

    // Ingresar valores por teclado al vector
    cout << "Ingresar los elementos al vector: " << endl;
    for(i=0; i<TAM; i++){
        cin >> vec[i];
    }
    // Buscamos el máximo valor y su posición
    posMaximo = 0;
    for(i=1; i<TAM; i++){
       if (vec[i] > vec[posMaximo]){
            posMaximo = i;
       }
    }

    // Reacomodo los elementos del vector posteriores a la posición
    // del mayor
    for(i=posMaximo; i<TAM-1; i++){
        vec[i] = vec[i + 1];
    }

    cout << endl << "Todos los elementos salvo el maximo: " << endl;
    // Mostrar vector (salvo última posición)
    for(i=0; i<TAM-1; i++){
        cout << vec[i] << endl;
    }


    return 0;
}
