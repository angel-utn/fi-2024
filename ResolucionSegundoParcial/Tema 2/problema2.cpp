/*
  La empresa FORD tiene 66 plantas en el mundo y por cada una de ellas ha generado un registro con los datos de la producción de vehículos. Cada registro tiene:

    Número de planta

    Cantidad de autos producidos

    Cantidad de camionetas producidas

    Cantidad de camiones producidos

 Se pide calcular e informar:

A) La planta con más camiones producidos.

B) La cantidad de plantas con más camionetas que autos producidos.

NOTA: considerar que la cantidad máxima de camiones producidos no se repite.


*/
#include <iostream>
using namespace std;

int main(){
    int nroPlanta, autos, camionetas, camiones, i;

    // A
    int maxCantCamiones = 0, maxNroPlanta;

    // B
    int cantPlantas = 0;

    for (i=1; i<=66; i++){

        cout << "Nro de planta: ";
        cin >> nroPlanta;

        cout << "Autos: ";
        cin >> autos;

        cout << "Camionetas: ";
        cin >> camionetas;

        cout << "Camiones: ";
        cin >> camiones;

        /// A
        if (camiones > maxCantCamiones){
            maxCantCamiones = camiones;
            maxNroPlanta = nroPlanta;
        }

        /// B
        if (camionetas > autos){
            cantPlantas++;
        }

    }

    cout << endl << endl;
    cout << "A) Nro Planta: " << maxNroPlanta << endl;
    cout << "B) Cantidad de plantas: " << cantPlantas << endl;

    return 0;
}
