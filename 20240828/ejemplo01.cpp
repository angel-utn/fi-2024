/**
Dada una lista de 10 temperaturas registradas en los �ltimos 10 d�as.
Las temperaturas se ingresan ordenadas por d�a (ascendentemente).
Calcular e informar:
-    La amplitud t�rmica (la diferencia entre la temperatura m�xima y la m�nima).
-    La cantidad de d�as que se registr� la temperatura m�nima.
-    El/los d�as en que se registr� la temperatura m�xima.
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

    /// Temperatura m�xima y m�nimo
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
