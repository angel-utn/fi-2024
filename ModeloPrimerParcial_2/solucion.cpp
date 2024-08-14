/*
Enunciado:
https://docs.google.com/document/d/16ePMDPNdrOLEpOZ6VaT3rDVA2Vq7rZQ1-CRUoYTHmcM/edit
*/
#include <iostream>
using namespace std;

int main(){
    int codIndustria, codExportacion, continente;
    float toneladas, importe;

    // A
    int totalToneladasAmerica = 0, totalToneladasEuropa = 0, totalToneladasAsia = 0;
    // B
    int cantidadIndustriasEuropaPeroNoAsia = 0;
    // C
    int cantExpoMayorA40America = 0, cantExpoMayorA40Europa = 0, cantExpoMayorA40Asia = 0;
    // D
    float totalAbonadoAmericaIndustria5 = 0, totalAbonadoEuropaIndustria5 = 0, totalAbonadoAsiaIndustria5 = 0;

    cout << "Ingrese el código de la industria: ";
    cin >> codIndustria;

    while (codIndustria != 0){

        cout << "Ingrese el código de la exportación: ";
        cin >> codExportacion;

        // A
        totalToneladasAmerica = 0;
        totalToneladasEuropa = 0;
        totalToneladasAsia = 0;    

        while(codExportacion != 0){
            cout << "Ingrese el continente de destino (1 - América, 2 - Europa, 3 - Asia): ";
            cin >> continente;
            cout << "Ingrese el total de toneladas exportadas: ";
            cin >> toneladas;
            cout << "Ingrese el importe total: ";
            cin >> importe;

            switch (continente){
                case 1:
                    // A
                    totalToneladasAmerica += toneladas;
                    // C
                    if (toneladas > 40){
                        cantExpoMayorA40America++;
                    }
                    // D
                    if (codIndustria == 5){
                        totalAbonadoAmericaIndustria5 += importe;
                    }
                    break;
                case 2:
                    // A
                    totalToneladasEuropa += toneladas;
                    // C
                    if (toneladas > 40){
                        cantExpoMayorA40Europa++;
                    }
                    // D
                    if (codIndustria == 5){
                        totalAbonadoEuropaIndustria5 += importe;
                    }
                    break;
                case 3:
                    // A
                    totalToneladasAsia += toneladas;
                    // C
                    if (toneladas > 40){
                        cantExpoMayorA40Asia++;
                    }
                    // D
                    if (codIndustria == 5){
                        totalAbonadoAsiaIndustria5 += importe;
                    }
                    break;
            }

            cout << "Ingrese el código de la exportación: ";
            cin >> codExportacion;
        }

        cout << endl << "Punto A" << endl;
        cout << "Código de la industria: " << codIndustria << endl;
        cout << "Total de toneladas exportadas a América: " << totalToneladasAmerica << endl;
        cout << "Total de toneladas exportadas a Europa: " << totalToneladasEuropa << endl;
        cout << "Total de toneladas exportadas a Asia: " << totalToneladasAsia << endl;

        // B
        if (totalToneladasEuropa > 0 && totalToneladasAsia == 0){
            cantidadIndustriasEuropaPeroNoAsia++;
        }


        cout << "Ingrese el código de la industria: ";
        cin >> codIndustria;
    }
    cout << endl << "Punto B" << endl;
    cout << "Cantidad de industrias que hayan exportado a Europa pero no a Asia: " << cantidadIndustriasEuropaPeroNoAsia << endl;

    cout << endl << "Punto C" << endl;
    cout << "Los códigos de continente que no hayan registrado ninguna exportación mayor a 40 toneladas: " << endl;
    if (cantExpoMayorA40America == 0){
        cout << "1 - América" << endl;
    }
    if (cantExpoMayorA40Europa == 0){
        cout << "2 - Europa" << endl;
    }
    if (cantExpoMayorA40Asia == 0){
        cout << "3 - Asia" << endl;
    }

    cout << endl << "Punto D" << endl;
    if (totalAbonadoAmericaIndustria5 > totalAbonadoEuropaIndustria5 && totalAbonadoAmericaIndustria5 > totalAbonadoAsiaIndustria5){
        cout << "América" << endl;
    } else if (totalAbonadoEuropaIndustria5 > totalAbonadoAmericaIndustria5 && totalAbonadoEuropaIndustria5 > totalAbonadoAsiaIndustria5){
        cout << "Europa" << endl;
    } else {
        cout << "Asia" << endl;
    }




}