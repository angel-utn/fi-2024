/**
  Hacer un programa que permita ingresar el nombre de un producto, la cantidad de unidades
  vendidas y el precio unitario de dicho artículo. Luego, el programa debe poder
  generar una salida con el siguiente formato:

--------------------------------
  PRODUCTO : Alfajor
  PPU      : $ 750.4
  CANTIDAD : 2
--------------------------------
  TOTAL    : $ 1500.8
--------------------------------
*/

#include <iostream>
using namespace std;

int main(){
    int cantidad;
    float precioPorUnidad, totalCompra, vuelto, pagoEnEfectivo, debe;
    string nombreProducto;

    cout << "Nombre del producto: ";
    cin >> nombreProducto;

    cout << "Precio por unidad: $";
    cin >> precioPorUnidad;

    cout << "Cantidad de unidades: ";
    cin >> cantidad;


    totalCompra = precioPorUnidad * cantidad;

    cout << endl << endl;
    cout << "--------------------------------" << endl;
    cout << "  PRODUCTO : " << nombreProducto  << endl;
    cout << "  PPU      : $ " << precioPorUnidad << endl;
    cout << "  CANTIDAD : " << cantidad << " unidade(s)" << endl;
    cout << "--------------------------------" << endl;
    cout << "  TOTAL    : $ " << totalCompra << endl;
    cout << "--------------------------------" << endl;

    cout << endl;
    cout << "Ingresar pago del cliente: $";
    cin >> pagoEnEfectivo;

    vuelto = pagoEnEfectivo - totalCompra;

    cout << endl;
    cout << "--------------------------------" << endl;

    /**
      Operadores relacionales
      -----------------------
      >
      >=
      <
      <=
      ==
      !=
    */


    if (vuelto >= 0){
        cout << "  VUELTO   : $ " << vuelto << endl;
    }
    else{
        debe = vuelto * -1;
        cout << "  DEBE     : $ " << debe << endl;
    }
    cout << "--------------------------------" << endl;


    return 0;
}


