/**
    La AFIP tiene la informaci�n de las compras realizadas por las empresas durante este a�o. Por cada compra se almacena:

    - C�digo de compra
    - C�digo de empresa
    - N�mero de provincia  (entero entre 1 y 24)
    - D�a (entero)
    - Mes (entero)
    - Importe ($ float)



El fin de los datos se indica con un c�digo de compra igual a 0.

Calcular e informar:

A) La provincia con m�s cantidad de compras.

B) El importe total de las compras realizadas en el mes de julio.

C) La cantidad de meses con una cantidad de compras menor a 10000.

NOTA: s�lo una provincia va a tener una cantidad de compras mayor.
*/

#include <iostream>
using namespace std;

int main(){
    int codCompra, codEmpresa, nProv, dia, mes;
    float importe;

    /// A
    int vecProvincias[24] = {}, cantMaxima = 0, provMaxima, i;
    /// B
    float totalJulio = 0;
    /// C
    int vecMeses[12] = {}, cantMeses = 0;

    cout << "Codigo de compra: ";
    cin >> codCompra;

    while (codCompra != 0){
        cout << "Codigo de empresa: ";
        cin >> codEmpresa;
        cout << "Provincia: ";
        cin >> nProv;
        cout << "Dia: ";
        cin >> dia;
        cout << "Mes: ";
        cin >> mes;
        cout << "Importe: $";
        cin >> importe;

        // A
        vecProvincias[nProv-1]++;

        // B
        if (mes == 7)
        {
            totalJulio += importe;
        }

        // C
        vecMeses[mes-1]++;


        cout << "Codigo de compra: ";
        cin >> codCompra;
    }

    cout << endl << endl;

    for(i = 0; i < 24; i++){
        if (vecProvincias[i] > cantMaxima){
            cantMaxima = vecProvincias[i];
            provMaxima = i + 1;
        }
    }

    cout << "A) Provincia con mas cantidad de compras: " << provMaxima << endl;
    cout << "B) Total de compras de Julio $ " << totalJulio << endl;

    for (i = 0; i < 12; i++){
        if (vecMeses[i] < 10000){
            cantMeses++;
        }
    }

    cout << "C) Cantidad de meses con una cantidad de compras menor a 10000: " << cantMeses << endl;


    return 0;
}
