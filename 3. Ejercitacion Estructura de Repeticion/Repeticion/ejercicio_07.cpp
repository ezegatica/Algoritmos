#include <iostream>

using namespace std;
/*
7) Ingresar la cantidad de alumnos de un curso. Ingresar por cada alumno el nombre y una nota. Por
cada alumno informar su nombre y si está aprobado o desaprobado. Informar también el
porcentaje de alumnos aprobados y la cantidad de desaprobados.
*/
int main() {
    int cantidad, aprobados, desaprobados = 0;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad;
    for (int i = 1; i <= cantidad; i++)
    {
        string nombre;
        int nota;
        cout << "Ingrese el nombre del alumno " << i << ": ";
        cin >> nombre;
        cout << "Ingrese la nota del alumno " << i << " (" << nombre << "): ";
        cin >> nota;
        if (nota >= 6)
        {
            aprobados++;
        }
        else
        {
            desaprobados++;
        }
    }
    cout << "La cantidad de alumnos aprobados es: " << aprobados << endl;
    cout << "La cantidad de alumnos desaprobados es: " << desaprobados << endl;
    cout << "El porcentaje de alumnos aprobados es: " << (aprobados * 100) / cantidad << "%" << endl;
    cout << "El porcentaje de alumnos desaprobados es: " << (desaprobados * 100) / cantidad << "%" << endl;
    return 0;
}