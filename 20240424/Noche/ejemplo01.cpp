/**
   Hacer un programa para ingresar 3 números enteros por teclado.
   Calcular e informar:
   "Todos fueron positivos", "Alguno fue positivo", "Ninguno fue positivo"
*/
#include <iostream>
using namespace std;

int main(){

    int n1, n2, n3, n4, n5, n6;

    cout << "Ingresar nro: ";
    cin >> n1;

    cout << "Ingresar nro: ";
    cin >> n2;

    cout << "Ingresar nro: ";
    cin >> n3;

    cout << endl << endl;

    if (n1 > 0 && n2 > 0 && n3 > 0){
        cout << "Todos fueron positivos";
    }
    else{
        if (n1 > 0 || n2 > 0 || n3 > 0){
            cout << "Alguno fue positivo";
        }
        else{
            cout << "Ninguno fue positivo";
        }
    }



    return 0;
}
