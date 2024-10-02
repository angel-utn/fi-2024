#include <iostream>
using namespace std;

int main(){
   int empleado, modelo, medioPago, dia, sede, i;
   /// A
   int atencionesxModelo[15] = {}, modeloMenorAtenciones, cantidadMenorAtenciones;

   /// B
   int atencionesxMedioPago[10] = {}, medioPagoMasAtenciones, cantidadMayorAtenciones=0;

   /// C
   int atencionesxSede[4] = {};
   string nombresSede[4] = {"Zona Norte", "CABA", "Zona Sur" , "Zona Oeste"};


   cout << "Empleado: ";
   cin >> empleado;

   while (empleado != 0){

      cout << "Modelo: ";
      cin >> modelo;
      cout << "Tipo de medio de pago: ";
      cin >> medioPago;
      cout << "Día: ";
      cin >> dia;
      cout << "Sede: ";
      cin >> sede;

      //// A
      atencionesxModelo[modelo-1]++;

      /// B
      if (dia <= 15){
         atencionesxMedioPago[medioPago-1]++;
      }

      /// C
      atencionesxSede [sede - 1]++;


      cout << "Empleado: ";
      cin >> empleado;

   }

   cantidadMenorAtenciones = atencionesxModelo[0];
   for(i = 1; i<15; i++){
      if (atencionesxModelo[i] < cantidadMenorAtenciones){
         cantidadMenorAtenciones = atencionesxModelo[i];
         modeloMenorAtenciones = i + 1;
      }
   }

   cout << endl << endl << "PUNTO A" << endl;
   cout << "Modelo con menor cantidad de atenciones: " << modeloMenorAtenciones << endl;
   cout << "Cantidad menor de atenciones: " << cantidadMenorAtenciones << endl;

   for(i = 0; i < 10; i++){
      if (atencionesxMedioPago[i] > cantidadMayorAtenciones){
         cantidadMayorAtenciones = atencionesxMedioPago[i];
         medioPagoMasAtenciones = i + 1;
      }
   }

   cout << endl << endl << "PUNTO B" << endl;
   cout << "Medio de pago con mayor cantidad de atenciones en primera quincena: " << medioPagoMasAtenciones << endl;
   cout << "Cantidad mayor de atenciones: " << cantidadMayorAtenciones << endl;

   cout << endl << endl << "PUNTO C" << endl;
   for(i=0; i<4; i++){
      cout << nombresSede[i] << ": " << atencionesxSede[i] << " atenciones." << endl;
   }


	return 0;
}
