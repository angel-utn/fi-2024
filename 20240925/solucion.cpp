/*
Se ingresa un lote de 24 registros donde se informa para cada provincia el nro. de
 zona geográfica en donde la misma está ubicada.

Cada registro contiene:

- Nro. de Provincia(1 a 24)
- Nro. de Zona de la provincia(1 a 5)

A partir de este lote se pide que se informe las zonas que abarquen más de 3
provincias distintas y cuales son esas provincias. Indicar el número de zona y
el nombre de la zona.

Nro de Zona     Zona
--------------------------
    1           Centro
    2           Norte
    3           Oeste
    4           Este
    5           Sur
*/

#include <iostream>
using namespace std;
#include <string>

int main(){
    int nprov, nzona, i, vzonas[5] = {}, j, numeroZona;
    int zonaxProvincia[24];
    string nombresZonas[5] = {"Centro", "Norte", "Oeste", "Este", "Sur"};

    for(i=0; i<24; i++){
        cout << "Provincia: ";
        cin >> nprov;
        cout << "Zona: ";
        cin >> nzona;

        vzonas[nzona - 1]++;
        zonaxProvincia[nprov - 1] = nzona;
    }
    cout << endl << endl;

    for(i=0; i<5; i++){
        if (vzonas[i] > 3){
            numeroZona = i+1;
            cout << "Zona: " << numeroZona << endl;
            cout << "Nombre: " << nombresZonas[i] << endl;
            cout << "Cant. provincias: " << vzonas[i] << endl;
            cout << "Provincias: ";
            for(j=0; j<24; j++){
                if (zonaxProvincia[j] == numeroZona){
                    cout << j+1 << " ";
                }
            }
            cout << endl << endl;
        }
    }

    return 0;
}
