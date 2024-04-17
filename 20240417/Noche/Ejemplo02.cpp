/**
Hacer un programa que solicite la edad y la altura de 3 personas.

Calcular e informar:

A- La cantidad de personas con m�s de 18 a�os y m�s de 1.65mts
B- El promedio de altura de las personas con m�s de 30 a�os.
C- La cantidad de personas con edad de 20, 30, 40 o 50 a�os.

*/
#include <iostream>
using namespace std;

int main(){
    int edad;
    float altura;

    /// A
    int cantPersonasMas18yMas165 = 0;
    /// B
    float sumaAlturas = 0, promedio;
    int cantPersonasMas30 = 0;
    /// C
    int cantPersonas20304050 = 0;

   cout << "Edad: ";
   cin >> edad;

   cout << "Altura (mts): ";
   cin >> altura;

   /// A
   if (edad > 18 && altura > 1.65){
    cantPersonasMas18yMas165++;
   }
   /// B
   if (edad > 30){
    cantPersonasMas30++;
    //sumaAlturas = sumaAlturas + altura; // Equivalente a la l�nea inferior
    sumaAlturas += altura;
   }
   /// C
   if (edad == 20 || edad == 30 || edad == 40 || edad == 50){
    cantPersonas20304050++;
   }

   cout << "Edad: ";
   cin >> edad;

   cout << "Altura (mts): ";
   cin >> altura;

   /// A
   if (edad > 18 && altura > 1.65){
    cantPersonasMas18yMas165++;
   }
   /// B
   if (edad > 30){
    cantPersonasMas30++;
    //sumaAlturas = sumaAlturas + altura; // Equivalente a la l�nea inferior
    sumaAlturas += altura;
   }
   /// C
   if (edad == 20 || edad == 30 || edad == 40 || edad == 50){
    cantPersonas20304050++;
   }

   cout << "Edad: ";
   cin >> edad;

   cout << "Altura (mts): ";
   cin >> altura;

   /// A
   if (edad > 18 && altura > 1.65){
    cantPersonasMas18yMas165++;
   }
   /// B
   if (edad > 30){
    cantPersonasMas30++;
    //sumaAlturas = sumaAlturas + altura; // Equivalente a la l�nea inferior
    sumaAlturas += altura;
   }
   /// C
   if (edad == 20 || edad == 30 || edad == 40 || edad == 50){
    cantPersonas20304050++;
   }


   cout << "PUNTO A" << endl;
   cout << "Cant personas +18 y +1.65: " << cantPersonasMas18yMas165 << endl;

   if (cantPersonasMas30 != 0){
       cout << endl << "PUNTO B" << endl;
       promedio = sumaAlturas / cantPersonasMas30;
       cout << "Promedio de altura: " << promedio << endl;
   }

   cout << endl << "PUNTO C" << endl;
   cout << "Cant personas con 20, 30, 40 o 50: " << cantPersonas20304050 << endl;

    return 0;
}
