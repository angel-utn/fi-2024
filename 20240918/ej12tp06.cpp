/**
  12) A partir de un vector V1 de 15 componentes (ya cargado), generar e
  imprimir un vector V2 con los componentes de V1 en orden invertido.
*/

#include <iostream>
using namespace std;

int main(){
    const int TAM = 7;
    int v1[TAM], v2[TAM], i;

    for(i=0; i<TAM; i++){
        cout << "Ingresar nro: ";
        cin >> v1[i];
    }

    for(i=0; i<TAM; i++){
        v2[i] = v1[TAM-i-1];
    }

    cout << endl << endl;
    for(i=0; i<TAM; i++){
        cout << v1[i] << "\t" << v2[i] << endl;
    }

    return 0;
}
