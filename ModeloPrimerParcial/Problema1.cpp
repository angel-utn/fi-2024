/*
Una fábrica tienen un lote de registros con la información de los consumos de metales
del mes pasado. Cada registro tiene:
- Código de metal
- Tipo de metal (1: ferroso; 2: no ferroso)
- Cantidad de toneladas al inicio del mes.
- Cantidad de toneladas al finalizar el mes.

El fin de la información se indica con un código de metal negativo. 
Tener en cuenta que la fábrica no ha incorporado stock de metales durante todo este período.

Se pide calcular e informar:

A) El porcentaje consumido de cada tipo de metal con relación al total consumido durante todo el mes.
B) La cantidad de metales que no se utilizaron.
C) El código de metal que más se haya consumido.
*/
#include <iostream>
using namespace std;

int main()
{
    int codigoMetal, tipoMetal;
    float cantidadInicio, cantidadFinal;
    float consumo;

    //A
    float totalFerroso = 0;
    float totalNoFerroso = 0;

    //B
    int cantidadMetalesNoUtilizados = 0;

    //C
    int codigoMetalMasConsumido;
    float cantidadMetalMasConsumido = 0;

    cout << "Ingrese el codigo de metal: ";
    cin >> codigoMetal;
    while (codigoMetal >= 0){
        cout << "Ingrese el tipo de metal (1: ferroso; 2: no ferroso): ";
        cin >> tipoMetal;
        cout << "Ingrese la cantidad de toneladas al inicio del mes: ";
        cin >> cantidadInicio;
        cout << "Ingrese la cantidad de toneladas al finalizar el mes: ";
        cin >> cantidadFinal;

        consumo = cantidadInicio - cantidadFinal;

        // A) El porcentaje consumido de cada tipo de metal con relación al total consumido durante todo el mes.
        if (tipoMetal == 1){
            totalFerroso += consumo;
        } else {
            totalNoFerroso += consumo;
        }

        // B) La cantidad de metales que no se utilizaron.
        if (consumo == 0){
            cantidadMetalesNoUtilizados++;
        }

        // C) El código de metal que más se haya consumido.
        if (consumo > cantidadMetalMasConsumido){
            codigoMetalMasConsumido = codigoMetal;
            cantidadMetalMasConsumido = consumo;
        }

        cout << "Ingrese el codigo de metal: ";
        cin >> codigoMetal;
    }

    cout << endl << "Punto A" << endl;
    float porcentaje = (totalFerroso * 100) / (totalFerroso + totalNoFerroso);
    cout << "Porcentaje consumido de metal ferroso: " << porcentaje << "%" << endl;
    cout << "Porcentaje consumido de metal no ferroso: " << 100 - porcentaje << "%" << endl;

    cout << endl << "Punto B" << endl;
    cout << "Cantidad de metales que no se utilizaron: " << cantidadMetalesNoUtilizados << endl;

    cout << endl << "Punto C" << endl;
    cout << "Codigo de metal mas consumido: " << codigoMetalMasConsumido << endl;

}