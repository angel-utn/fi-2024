#include <iostream>
using namespace std;

int main(){

    int nro, cantPositivos = 0;

    cout << "Ingresar 5 numeros: " << endl;

    cin >> nro;
    if (nro > 0){
        cantPositivos++;
    }

    cin >> nro;
    if (nro > 0){
        cantPositivos++;
    }

    cin >> nro;
    if (nro > 0){
        cantPositivos++;
    }

    cin >> nro;
    if (nro > 0){
        cantPositivos++;
    }

    cin >> nro;
    if (nro > 0){
        cantPositivos++;
    }

    cout << "Cantidad de positivos: " << cantPositivos << endl;


    return 0;
}
