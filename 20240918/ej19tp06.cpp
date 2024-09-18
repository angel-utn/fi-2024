/**
19) Leer un conjunto de 10 números enteros, se pide:
Formar un vector llamado PAR con aquellos valores que sean pares.
Determinar e informar los valores máximo y mínimo del vector PAR, informando además
sus ubicaciones dentro del vector PAR y también cuales fueron sus
ubicaciones en el orden de ingreso.

Resolución incompleta: Falta calcular máximo y mínimo.
*/

#include <iostream>
using namespace std;

int main(){
    const int TAM = 10;
    int vec[TAM], par[TAM], pospar[TAM], i, contPares = 0;

    cout << "Cargar " << TAM << " nros enteros: " << endl;
    for(i=0; i<TAM; i++){
        cin >> vec[i];
    }

    for(i=0; i<TAM; i++){
        if (vec[i] % 2 == 0){
            par[contPares] = vec[i];
            pospar[contPares] = i+1;
            contPares++;
        }
    }

    cout << endl << "Pares del vector original" << endl;
    for(i=0; i<contPares; i++){
        cout << par[i] << " cargado originalmente en la pos #" << pospar[i] << endl;
    }

    return 0;
}
