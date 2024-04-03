/**
    Hacer un programa que solicite al usuario el tiempo de uso de una m�quina
    y muestre la cantidad de piezas producidas. Sabiendo que:

    - Cada pieza es producida por la m�quina en el transcurso de 10 minutos.

*/
#include <iostream>
using namespace std;

int main(){
    int tiempoDeUso, piezasProducidas;

    cout << "Ingresar el tiempo de uso (en minutos): ";
    cin >> tiempoDeUso;

    piezasProducidas = tiempoDeUso / 10;

    cout << "Piezas producidas: ";
    cout << piezasProducidas;

    return 0;
}
