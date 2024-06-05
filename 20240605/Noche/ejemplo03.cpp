/*
    A partir de una lista de n�meros que finaliza con un n�mero negativo.
    Calcular e informar el primero de los n�meros primos.
    S�lo mostrarlos si hay n�meros primos ingresados.
*/

#include <iostream>
using namespace std;

int main()
{
    int nro, i, contDivisores, primerPrimo;
    bool huboPrimerPrimo = false;

    cout << "Numero: ";
    cin >> nro;

    while (nro >= 0)
    {
        contDivisores = 0;
        for(i=1; i<=nro; i++)
        {
            if (nro % i == 0)
            {
                contDivisores++;
            }
        }


        if (contDivisores == 2)
        {
            if (huboPrimerPrimo == false){
              primerPrimo = nro;
              huboPrimerPrimo = true;
            }
        }

        cout << "Numero: ";
        cin >> nro;
    }

    if (huboPrimerPrimo == true){
        cout << primerPrimo << endl;
    }
    else{
        cout << "No hubo primos" << endl;
    }

    return 0;
}
