/**
    Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
    ingresa un cero. Se pide determinar e informar el m�ximo de los n�meros pares de
    la lista y su posici�n dentro de la misma. Suponer que los n�meros pueden ser
    todos positivos, todos negativos o combinados.
*/
#include <iostream>
using namespace std;

int main(){
    int n, maximo, maxPosicion, pos = 0, contPares=0;

    cout << "Numero ";
    cin >> n;

    while (n != 0){
        pos ++;
        if (n%2 == 0){
            contPares++;
            if (n > maximo || contPares == 1){
                maximo = n;
                maxPosicion = pos;
            }
        }

        cout << "Numero ";
        cin >> n;
    }

    if (contPares != 0){
        cout << endl << "Es valor par maximo es: " << maximo << endl;
        cout << "Su posicion en la lista es: " << maxPosicion << endl;
    }
    else{
        cout << "No hubo pares" << endl;
    }

    return 0;
}
