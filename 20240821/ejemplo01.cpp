/**
  Cargar las 40 notas de una materia.
  Calcular e informar el promedio general de la materia.
  Calcular e informar cuántas notas están por encima del promedio.
*/
#include <iostream>
using namespace std;

int main(){
    const int CANT_NOTAS = 5;

    float vecNotas[CANT_NOTAS], promedioNotas, sumaNotas = 0;
    int i, cantidadNotasMayoresAlPromedio = 0;

    for(i=0; i<CANT_NOTAS; i++){
        cout << "Nota: ";
        cin >> vecNotas[i];
    }

    for(i=0; i<CANT_NOTAS; i++){
        sumaNotas += vecNotas[i];
    }

    promedioNotas = sumaNotas / CANT_NOTAS;

    cout << endl << "Promedio de notas: " << promedioNotas << endl;

    for(i=0; i<CANT_NOTAS; i++){
        if (vecNotas[i] > promedioNotas){
            cantidadNotasMayoresAlPromedio++;
        }
    }

    cout << "Cantidad de notas por encima del promedio: " << cantidadNotasMayoresAlPromedio << endl;


    cout << "Las notas por encima del promedio " << promedioNotas << " son: " << endl;

    for(i=0; i<CANT_NOTAS; i++){
        if (vecNotas[i] > promedioNotas){
            cout << vecNotas[i] << endl;
        }
    }

    return 0;
}
