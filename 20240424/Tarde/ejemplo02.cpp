/**
   Hacer un programa para ingresar 3 n�meros enteros por teclado.
   Calcular e informar:
   "Todos fueron positivos", "Alg�n n�mero fue positivo", "Ning�n n�mero fue positivo"
*/
#include <iostream>
using namespace std;

int main(){
    int n, cantPositivos = 0;

    cout << "Ingresar n�mero: ";
    cin >> n;

    if (n > 0){
        cantPositivos++;
    }

    cout << "Ingresar n�mero: ";
    cin >> n;

    if (n > 0){
        cantPositivos++;
    }

    cout << "Ingresar n�mero: ";
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
