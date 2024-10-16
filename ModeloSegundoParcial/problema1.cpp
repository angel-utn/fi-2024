/*
1) La Dirección Nacional de Vialidad dispone de un conjunto de registros con los datos de las rutas de
todo el país. Cada registro contiene:
 Código de ruta (1 a 250)
 Código de ciudad de origen
 Código de ciudad de fin
 Longitud (en km)
 Tipo de ruta (1: Autopista, 2: Asfalto, 3: Ripio, 4: Mejorado, 5: Tierra)
 Peaje (1: Sí, 0: No )

Hay un registro por cada ruta.

Se pide calcular e informar:
A) La ruta más larga, indicando las ciudades de origen y de fin.
B) El porcentaje de rutas con peaje, con relación al total de rutas

     CANT RUTAS CON PEAJE * 100 / CANT TOTAL RUTAS

C) La cantidad de rutas de cada tipo.

*/
#include <iostream>
using namespace std;

int main(){
   const int CANT = 10;
   int i, codRuta, ciudadOrigen, ciudadFin, tipoRuta, peaje;
   float km;

   /// A
   int codRutaMayor, ciudadOrigenMayor, ciudadFinMayor;
   float kmMayor = 0;

   /// B
   int cantRutasConPeaje = 0;
   float porcentajeRutasConPeaje;

   /// C
   int tiposRuta[5] = {};
   string nombresTiposRuta[5] = {"Autopista", "Asfalto", "Ripio", "Mejorado", "Tierra"};

   for(i=1; i<=CANT; i++){
      cout << "Código de ruta: ";
      cin >> codRuta;
      cout << "Ciudad de origen: ";
      cin >> ciudadOrigen;
      cout << "Ciudad de fin: ";
      cin >> ciudadFin;
      cout << "Kms: ";
      cin >> km;
      cout << "Tipo de ruta: ";
      cin >> tipoRuta;
      cout << "Peaje: ";
      cin >> peaje;

      if (km > kmMayor){
         kmMayor = km;
         codRutaMayor = codRuta;
         ciudadOrigenMayor = ciudadOrigen;
         ciudadFinMayor = ciudadFin;
      }

      if (peaje == 1){
         cantRutasConPeaje++;
      }

      tiposRuta[tipoRuta-1]++;

   }

   cout << endl << "PUNTO A" << endl;
   cout << "Ruta más extensa: " << codRutaMayor << endl;
   cout << "Ciudad origen   : " << ciudadOrigenMayor << endl;
   cout << "Ciudad destino  : " << ciudadFinMayor << endl;
   cout << "Longitud        : " << kmMayor << " kms" << endl << endl;

   porcentajeRutasConPeaje = cantRutasConPeaje * 100 / CANT;
   cout << endl << "PUNTO B" << endl;
   cout << "Porcentaje de rutas con peaje: " << porcentajeRutasConPeaje << " %" << endl << endl;

   cout << endl << "PUNTO C" << endl;
   for(i=0; i<5; i++){
      cout << "Tipo    : " << nombresTiposRuta[i] << endl;
      cout << "Cantidad: " << tiposRuta[i] << endl << endl;
   }



	return 0;
}
