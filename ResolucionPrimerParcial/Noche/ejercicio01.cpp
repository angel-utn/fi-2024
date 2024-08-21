#include <iostream>
using namespace std;

int main(){

    int codigoCurso, codigoCarrera, cantInscriptos, cantAprobados;

    ///A
    float porcentajeAprobados;
    int cantCursosMas30 = 0;
    ///B
    int menorCantInscriptos, cursoConMenorCantInscriptos;
    int c=0;


    cout << "Codigo de curso: ";
    cin >> codigoCurso;

    while (codigoCurso != 0){
        c++;
        cout << "Codigo de carrera: ";
        cin >> codigoCarrera;

        cout << "Cantidad de inscriptos: ";
        cin >> cantInscriptos;

        cout << "Cantidad de aprobados: ";
        cin >> cantAprobados;

        porcentajeAprobados = cantAprobados * 100.0 / cantInscriptos;

        if (porcentajeAprobados > 30){
           cantCursosMas30++;
        }

        if (c == 1 || cantInscriptos < menorCantInscriptos){
            menorCantInscriptos = cantInscriptos;
            cursoConMenorCantInscriptos = codigoCurso;
        }

        cout << "----------------------------" << endl;

        cout << "Codigo de curso: ";
        cin >> codigoCurso;

    }

    cout << endl << "Cantidad de cursos con mas de 30% de aprobados/inscriptos: " << cantCursosMas30 << endl;

    cout << endl << "Curso con menor cantidad de inscriptos: " << cursoConMenorCantInscriptos << endl;

    return 0;
}
