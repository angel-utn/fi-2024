/**
La Organizaci�n de Estados Americanos tiene un registro por cada uno de los 34 pa�ses que la integran. Por cada pa�s se registr�:
N�mero de pa�s
Cantidad de habitantes
Zona geogr�fica (1: Norte; 2: Sur; 3: Centro)
PBI (real)
Se pide calcular e informar:
A) La zona geogr�fica con m�s pa�ses. Pueden informar nombre o n�mero indistintamente.
B) La cantidad total de habitantes
C) El promedio de PBI entre todos los pa�ses.

Aclaraci�n: Habr� �nicamente una zona geogr�fica con la mayor cantidad de pa�ses.

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
