#include <iostream>
using namespace std;

int main(){
    int i, j, maquina, fallidas;
    int totalFallidas;

    for(i=1; i<=5; i++){
        totalFallidas = 0;
        cout << "Maquina: ";
        cin >> maquina;

        cout << "-------------------------" << endl;
        for(j=1; j<=5; j++){

            cout << "Fallidas: ";
            cin >> fallidas;

            totalFallidas += fallidas;
        }
        cout << endl;
        cout << "Maquina: " << maquina << endl;
        cout << "Total piezas fallidas: " << totalFallidas << endl;
        cout << "-------------------------" << endl;

    }

    return 0;
}
