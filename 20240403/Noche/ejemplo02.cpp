/**
  Hacer un programa que solicite al usuario el tiempo de uso de una
  máquina y muestre el costo de producción. Sabiendo que:
  - Cada pieza es producida por la máquina en el transcurso de 10 minutos.
  - El costo de producir una pieza es de $20.5
  - El costo de mantenimiento de la máquina cada 20 piezas es de $2000
*/
#include <iostream>
using namespace std;

int main(){
    const int TIEMPO_PROD_X_PIEZA = 10;
    const float COSTO_PROD_PIEZA = 20;
    const int CANT_PIEZAS_MANTENIMIENTO = 20;
    const float COSTO_MANTENIMIENTO = 2000;

    int tiempoDeUso, piezasProducidas;
    float costoProduccion, costoMantenimiento, costoTotal;

    cout << "Ingresar el tiempo de uso (en minutos): ";
    cin >> tiempoDeUso;

    piezasProducidas = tiempoDeUso / TIEMPO_PROD_X_PIEZA;
    costoProduccion = piezasProducidas * COSTO_PROD_PIEZA;
    costoMantenimiento = (piezasProducidas / CANT_PIEZAS_MANTENIMIENTO) * COSTO_MANTENIMIENTO;

    costoTotal = costoProduccion + costoMantenimiento;
    cout << "Costo total de produccion $ " << costoTotal;

    return 0;
}
