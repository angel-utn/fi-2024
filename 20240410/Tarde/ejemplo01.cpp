#include <iostream>
using namespace std;

int main()
{
    const int EDAD_MINIMA = 18;
    const float ALTURA_MINIMA = 1.65;
    int edad;
    float altura;

    cout << "Edad: ";
    cin >> edad;
    cout << "Altura: ";
    cin >> altura;

    if (edad >= EDAD_MINIMA and altura >= ALTURA_MINIMA)
    {
        cout << "Mayor de edad y mas alto que 1.65" << endl;
    }


    return 0;
}
