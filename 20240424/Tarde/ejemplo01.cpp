/**
   Hacer un programa para ingresar 3 n�meros enteros por teclado.
   Calcular e informar:
   "Todos fueron positivos", "Alg�n n�mero fue positivo", "Ning�n n�mero fue positivo"
*/
#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;

    cout << "Ingresar n�mero: ";
    cin >> n1;

    cout << "Ingresar n�mero: ";
    cin >> n2;

    cout << "Ingresar n�mero: ";
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
