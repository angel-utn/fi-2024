/**
  Dada una lista de 5 números enteros. Calcular e informar cuántos de ellos fueron
  positivos.

  DE --> ???? --> INFO

*/
#include <iostream>
using namespace std;

int main(){

    int nro;
    int cantPositivos = 0;

    cout << "Ingresar numeros: " << endl;
    cin >> nro;

    if (nro > 0){
        cantPositivos++;
    }

    cout << "Ingresar numeros: " << endl;
    cin >> nro;

    if (nro > 0){
        cantPositivos++;
    }

    cout << "Ingresar numeros: " << endl;
    cin >> nro;

    if (nro > 0){
        cantPositivos++;
    }

    cout << "Ingresar numeros: " << endl;
    cin >> nro;

    if (nro > 0){
        cantPositivos++;
    }

    cout << "Ingresar numeros: " << endl;
    cin >> nro;

    if (nro > 0){
        cantPositivos++;
    }

    cout << "Cantidad de positivos: " << cantPositivos << endl;

    return 0;
}
