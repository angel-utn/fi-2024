/**
    Hacer un programa que solicite por teclado 3 n�meros. Calcular la suma
    pero sumando de a dos n�meros a la vez.

    NO SE PUEDE
    Suma = N1 + N2 + N3;

*/

#include <iostream>
using namespace std;

int main(){
    int suma, n;

    cout << "Ingresar nro: " << endl;
    cin >> n;

    suma = n ;

    cout << "Ingresar nro: " << endl;
    cin >> n;

    suma = suma + n;

    cout << "Ingresar nro: " << endl;
    cin >> n;

    suma = suma + n;

    cout << "Resultado: " << suma;

    return 0;
}
