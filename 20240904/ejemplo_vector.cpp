/**
Un comercio dispone de la información de las ventas del mes de Agosto.

Por cada venta registró:
- Nro de Venta (entero)
- Día de la venta (entero [1-31])
- Importe (real)

El fin de ingreso de datos se indica con número de venta igual a cero.

Calcular e informar:
- A) Por cada día el importe total recaudado (entre todas las ventas de ese día).
- B) La cantidad de días en los que no hubo ventas.
- C) El día con la mayor recaudación y cuánto fue la recaudación
- D) Igual a (A), pero solamente los días en los que hubo recaudación.
- E) Igual a (C), pero podría haber varios días con la recaudación máxima.
*/

#include <iostream>
using namespace std;

int main(){
    float vecRecaudacion[31] = {}, importe;
    int nroVenta, dia, i, nroDiaRecaudacionMaxima;

    int diasSinVentas = 0;

    float recaudacionMaxima = 0;

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

    for(i=0; i<31; i++){
        if (vecRecaudacion[i] > recaudacionMaxima){
            recaudacionMaxima = vecRecaudacion[i];
            nroDiaRecaudacionMaxima = i+1;
        }
    }
    cout << "Recaudacion maxima $ " << recaudacionMaxima << " en el dia " << nroDiaRecaudacionMaxima;


    return 0;
}
