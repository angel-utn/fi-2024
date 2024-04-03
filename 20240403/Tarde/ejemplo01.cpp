/**
  Hacer un programa que solicite al usuario el tiempo de uso de una máquina
  y muestre la cantidad de piezas producidas. Sabiendo que:
  Cada pieza es producida por la máquina en el transcurso de 10 minutos.
*/

#include <iostream>
using namespace std;

int main(){

    const int TIEMPO_PRODUCCION_X_PIEZA = 10;
    int minutosTrabajo, piezasProducidas;

    cout << "Ingresar minutos de trabajo de la maquina: ";
    cin >> minutosTrabajo;

    piezasProducidas = minutosTrabajo / TIEMPO_PRODUCCION_X_PIEZA;

    cout << "Piezas producidas: " << piezasProducidas;

    return 0;
}
