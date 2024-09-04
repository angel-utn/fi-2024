/**
Un comercio dispone de la informaci�n de las ventas del mes de Agosto.

Por cada venta registr�:
- Nro de Venta (entero)
- D�a de la venta (entero [1-31])
- Importe (real)

El fin de ingreso de datos se indica con n�mero de venta igual a cero.

Calcular e informar:
- Por cada d�a el importe total recaudado (entre todas las ventas de ese d�a).
- La cantidad de d�as en los que no hubo ventas.
- El d�a con la mayor recaudaci�n y cu�nto fue la recaudaci�n
- Igual al primero, pero solamente los d�as en los que hubo recaudaci�n.
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
