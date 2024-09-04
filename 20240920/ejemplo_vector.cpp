/**
Un comercio dispone de la información de las ventas del mes de Agosto.

Por cada venta registró:
- Nro de Venta (entero)
- Día de la venta (entero [1-31])
- Importe (real)

El fin de ingreso de datos se indica con número de venta igual a cero.

Calcular e informar:
- Por cada día el importe total recaudado (entre todas las ventas de ese día).
- La cantidad de días en los que no hubo ventas.
- El día con la mayor recaudación y cuánto fue la recaudación
- Igual al primero, pero solamente los días en los que hubo recaudación.
*/

#include <iostream>
using namespace std;

int main(){
    float vecRecaudacion[31] = {}, importe;
    int nroVenta, dia, i;

    int diasSinVentas = 0;

    cout << "Nro de venta: ";
    cin >> nroVenta;

    while (nroVenta != 0){

        cout << "Dia: ";
        cin >> dia;
        cout << "Importe: ";
        cin >> importe;

        vecRecaudacion[dia-1] += importe;

        cout << "Nro de venta: ";
        cin >> nroVenta;
    }

    for(i=0; i<31; i++){
        cout << "Dia: " << i+1 << " Importe $: " << vecRecaudacion[i] << endl;
    }

    for(i=0; i<31; i++){
        if (vecRecaudacion[i] == 0){
            diasSinVentas++;
        }
    }
    cout << "Dias en los que no hubo ventas: " << diasSinVentas << endl;


    return 0;
}
