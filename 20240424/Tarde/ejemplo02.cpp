/**
   Hacer un programa para ingresar 3 números enteros por teclado.
   Calcular e informar:
   "Todos fueron positivos", "Algún número fue positivo", "Ningún número fue positivo"
*/
#include <iostream>
using namespace std;

int main(){
    int n, cantPositivos = 0;

    cout << "Ingresar número: ";
    cin >> n;

    if (n > 0){
        cantPositivos++;
    }

    cout << "Ingresar número: ";
    cin >> n;

    if (n > 0){
        cantPositivos++;
    }

    cout << "Ingresar número: ";
    cin >> n;

    if (n > 0){
        cantPositivos++;
    }

    cout << endl << endl;

    if (cantPositivos == 3){
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
