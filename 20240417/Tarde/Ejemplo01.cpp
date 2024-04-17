/**
Hacer un programa que solicite la edad y la altura de 3 personas.
Calcular e informar:

A- La cantidad de personas con más de 18 años y más de 1.65mts
B- El promedio de altura de las personas con más de 30 años.
C- La cantidad de personas con edad de 20, 30, 40 o 50 años.
*/
#include <iostream>
using namespace std;

int main(){
    int edad;
    float altura;

    /// A
    int cantMayor18yMayor165 = 0;

    /// B
    int cantMayor30 = 0;
    float sumaAltura = 0;
    float promedio;

    /// C
    int cantPersonas20304050 = 0;

    cout << "Persona #1" << endl;
    cout << "Edad: ";
    cin >> edad;

    cout << "Altura: ";
    cin >> altura;

    /// A
    if (edad > 18 && altura > 1.65){
        cantMayor18yMayor165++;
    }
    /// B
    if (edad > 30){
        sumaAltura += altura;
        cantMayor30++;
    }
    /// C
    if (edad == 20 || edad == 30 || edad == 40 || edad == 50){
        cantPersonas20304050++;
    }


    cout << "Persona #2" << endl;
    cout << "Edad: ";
    cin >> edad;

    cout << "Altura: ";
    cin >> altura;

        /// A
    if (edad > 18 && altura > 1.65){
        cantMayor18yMayor165++;
    }
    /// B
    if (edad > 30){
        sumaAltura += altura;
        cantMayor30++;
    }
    /// C
    if (edad == 20 || edad == 30 || edad == 40 || edad == 50){
        cantPersonas20304050++;
    }


    cout << "Persona #3" << endl;
    cout << "Edad: ";
    cin >> edad;

    cout << "Altura: ";
    cin >> altura;

        /// A
    if (edad > 18 && altura > 1.65){
        cantMayor18yMayor165++;
    }
    /// B
    if (edad > 30){
        sumaAltura += altura;
        cantMayor30++;
    }
    /// C
    if (edad == 20 || edad == 30 || edad == 40 || edad == 50){
        cantPersonas20304050++;
    }


    cout << "PUNTO A" << endl;
    cout << "Cant +18 y +1.65: " << cantMayor18yMayor165 << endl;


    if (cantMayor30 != 0){
        promedio = sumaAltura / cantMayor30;
        cout << "PUNTO B" << endl;
        cout << "Promedio: " << promedio  << endl;
    }

    cout << "PUNTO C" << endl;
    cout << "Cant personas 20, 30, 40 o 50:  " << cantPersonas20304050 << endl;








    return 0;
}
