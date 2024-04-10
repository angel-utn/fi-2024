#include <iostream>
using namespace std;

int main(){
    int edad;
    float altura;

    cout << "Ingresar edad: ";
    cin >> edad;

    cout << "Ingresar altura: ";
    cin >> altura;

    if (edad >= 18 && altura >= 1.65){
        cout << "Es mayor de edad y mayor o igual a 1.65 mts" << endl;
    }

    return 0;
}
