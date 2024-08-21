/**
La Organización de Estados Americanos tiene un registro por cada uno de los 34 países que la integran. Por cada país se registró:
Número de país
Cantidad de habitantes
Zona geográfica (1: Norte; 2: Sur; 3: Centro)
PBI (real)
Se pide calcular e informar:
A) La zona geográfica con más países. Pueden informar nombre o número indistintamente.
B) La cantidad total de habitantes
C) El promedio de PBI entre todos los países.

Aclaración: Habrá únicamente una zona geográfica con la mayor cantidad de países.

*/
#include <iostream>
using namespace std;

int main(){
    int numeroPais, cantidadHabitantes, zonaGeografica, i;
    float pbi;

    /// A
    int norte=0, sur=0, centro=0;
    /// B
    int cantidadTotalHabitantes = 0;
    /// C
    float pbiAcumulado = 0, promedioPbi;

    for(i=1; i<=34; i++){
        cout << "Numero de Pais: ";
        cin >> numeroPais;

        cout << "Cantidad de Habitantes: ";
        cin >> cantidadHabitantes;

        cout << "Zona Geografica: ";
        cin >> zonaGeografica;

        cout << "PBI: ";
        cin >> pbi;

        /// A
        switch(zonaGeografica){
            case 1:
                norte++;
            break;
            case 2:
                sur++;
            break;
            case 3:
                centro++;
            break;
        }
        /// B
        cantidadTotalHabitantes += cantidadHabitantes;

        /// C
        pbiAcumulado += pbi;
    }

    cout << "Punto A" << endl;
    if (norte > sur && norte > centro){
        cout << "Norte" << endl;
    }
    else{
        if (sur > centro){
            cout << "Sur" << endl;
        }
        else{
            cout << "Centro" << endl;
        }
    }

    cout << endl << "Punto B" << endl;
    cout << "Cantidad total de habitantes: " << cantidadTotalHabitantes << endl;

    cout << endl << "Punto C" << endl;
    promedioPbi = pbiAcumulado / 34;
    cout << "Promedio PBI: " << promedioPbi << endl;

    return 0;
}
