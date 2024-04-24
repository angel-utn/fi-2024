/**
   Hacer un programa para ingresar 3 números enteros por teclado.
   Calcular e informar:
   "Todos fueron positivos", "Algún número fue positivo", "Ningún número fue positivo"
*/
#include <iostream>
using namespace std;

int main(){
    const int CANT_NUMEROS = 5;
    int n, cantPositivos = 0, x;

    for(x=1; x<=CANT_NUMEROS; x++){
        cout << "Ingresar número: ";
        cin >> n;

        if (n > 0){
            cantPositivos++;
        }
    }

    cout << endl << endl;

    if (cantPositivos == CANT_NUMEROS){
        cout << "Todos fueron positivos";
    }
    else{
        if (cantPositivos > 0){
            cout << "Alguno fue positivo";
        }
        else{
            cout << "Ninguno fue positivo";
        }
    }



    return 0;
}
