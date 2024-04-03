/**
  Hacer un programa que solicite al usuario el tiempo de uso de una máquina
  y muestre el costo de producción. Sabiendo que:
  - Cada pieza es producida por la máquina en el transcurso de 10 minutos.
  - El costo de producir una pieza es de $20.5
  - El costo de mantenimiento de la máquina cada 20 piezas es de $200
*/

#include <iostream>
using namespace std;

int main(){
    const int TIEMPO_PRODUCCION_X_PIEZA = 10;
    const int CANTIDAD_PIEZAS_MANTENIMIENTO = 20;
    const float COSTO_UNITARIO = 20.5;
    const float COSTO_MANTENIMIENTO = 200;
    float costoProduccionPiezas, costoMantenimiento, costoTotal;

    int minutosTrabajo, piezasProducidas;

    cout << "Ingresar minutos de trabajo de la maquina: ";
    cin >> minutosTrabajo;

    piezasProducidas = minutosTrabajo / TIEMPO_PRODUCCION_X_PIEZA;
    costoProduccionPiezas = piezasProducidas * COSTO_UNITARIO;
    costoMantenimiento = (piezasProducidas / CANTIDAD_PIEZAS_MANTENIMIENTO) * COSTO_MANTENIMIENTO;

    costoTotal = costoProduccionPiezas + costoMantenimiento;

    cout << "Piezas producidas: " << piezasProducidas << endl;
    cout << "Costo total: " << costoTotal;

    return 0;
}
