/**
Dada una lista de 10 temperaturas registradas en los últimos 10 días.
Las temperaturas se ingresan ordenadas por día (ascendentemente).
Calcular e informar:
-    La amplitud térmica (la diferencia entre la temperatura máxima y la mínima).
-    La cantidad de días que se registró la temperatura mínima.
-    El/los días en que se registró la temperatura máxima.
*/

#include <iostream>
using namespace std;

int main(){
    const int TEMP = 10;
    float vTemp[TEMP], maxima, minima, amplitudTermica;
    int i;

    /// B
    int cantidadDiasTempMinima = 0;

    /// Carga de datos
    for(i=0; i<TEMP; i++){
        cout << "Temperatura del dia #" << i+1 << ": ";
        cin >> vTemp[i];
    }

    /// Temperatura máxima y mínimo
    maxima = vTemp[0];
    minima = vTemp[0];

    for(i=0; i<TEMP; i++){
        if (vTemp[i] > maxima){
            maxima = vTemp[i];
        }
        if (vTemp[i] < minima){
            minima = vTemp[i];
        }
    }

    amplitudTermica = maxima - minima;
    cout << endl << "-----------------------------------" << endl;
    cout << "A) Amplitud termica: " << amplitudTermica << endl;

    for(i=0; i<TEMP; i++){
        if (vTemp[i] == minima){
            cantidadDiasTempMinima++;
        }
    }

    cout << "B) Cantidad de dias con temp minima: " << cantidadDiasTempMinima << endl;

    cout << "C) Dias con la temp maxima: ";

    for(i=0; i<TEMP; i++){
        if (vTemp[i] == maxima){
            cout << i+1 << " ";
        }
    }

    return 0;
}
