/*
Un censo agropecuario recabó información de 10 productores a lo largo de los últimos 5
años. Por cada año y productor registró:

- Código de productor
- Número de año (1 a 5)
- Cantidad de nacimientos de cerdos
- Cantidad de nacimientos de ovejas
- Cantidad de nacimientos de vacas

Los datos se encuentran agrupados por código de productor. Por cada productor, la
información está ordenada por año. 

Se pide calcular e informar:

A) Por cada productor, la cantidad de años en que no haya producido cerdos.
B) El código de productor que menos animales haya producido en el primer año de trabajo.
C) El porcentaje de cerdos, ovejas y vacas producidos en total entre todos los productores.
*/
#include <iostream>
using namespace std;

int main(){
    int codigoProductor, numeroAnio;
    int cantidadCerdos, cantidadOvejas, cantidadVacas, cantidadAnimales;
    int i, anio;

    // A
    int cantidadAniosSinCerdos = 0;

    // B
    int codigoProductorMenosAnimales = 0;
    int cantidadAnimalesMenor = 0;

    // C
    int totalCerdos, totalOvejas, totalVacas, totalAnimales;
    totalCerdos = 0;
    totalOvejas = 0;
    totalVacas = 0;
    totalAnimales = 0;
    float porcentajeCerdos, porcentajeOvejas, porcentajeVacas;

    
    for(i=1; i<=10; i++){
        
        cantidadAniosSinCerdos = 0;

        for(anio=1; anio<=5; anio++){
            cout << "Ingrese el codigo de productor: ";
            cin >> codigoProductor;
            cout << "Ingrese la cantidad de nacimientos de cerdos: ";
            cin >> cantidadCerdos;
            cout << "Ingrese la cantidad de nacimientos de ovejas: ";
            cin >> cantidadOvejas;
            cout << "Ingrese la cantidad de nacimientos de vacas: ";
            cin >> cantidadVacas;

            // A) Por cada productor, la cantidad de años en que no haya producido cerdos.
            if (cantidadCerdos == 0){
                cantidadAniosSinCerdos++;
            }

            // B) El código de productor que menos animales haya producido en el primer año de trabajo.
            cantidadAnimales = cantidadCerdos + cantidadOvejas + cantidadVacas;
            if (anio == 1){
                if (codigoProductorMenosAnimales == 0 || cantidadAnimales < cantidadAnimalesMenor){
                    codigoProductorMenosAnimales = codigoProductor;
                    cantidadAnimalesMenor = cantidadAnimales;
                }
            }

            // C) El porcentaje de cerdos, ovejas y vacas producidos en total entre todos los productores.
            totalCerdos += cantidadCerdos;
            totalOvejas += cantidadOvejas;
            totalVacas += cantidadVacas;
            totalAnimales += cantidadCerdos + cantidadOvejas + cantidadVacas;
        }
        cout << endl << "PUNTO A " << endl;
        cout << "El productor " << codigoProductor << " no produjo cerdos en " << cantidadAniosSinCerdos << " años." << endl;
    }
    cout << endl << "PUNTO B " << endl;
    cout << "El productor " << codigoProductorMenosAnimales << " produjo menos animales en el primer año de trabajo." << endl;

    cout << endl << "PUNTO C " << endl;
    porcentajeCerdos = (totalCerdos * 100.0) / totalAnimales;
    porcentajeOvejas = (totalOvejas * 100.0) / totalAnimales;
    porcentajeVacas = (totalVacas * 100.0) / totalAnimales;
    cout << "Porcentaje de cerdos: " << porcentajeCerdos << "%" << endl;
    cout << "Porcentaje de ovejas: " << porcentajeOvejas << "%" << endl;
    cout << "Porcentaje de vacas: " << porcentajeVacas << "%" << endl;

    return 0;
}