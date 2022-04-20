#include <iostream>

using namespace std;
/*
2) Ingresar la cantidad de alumnos de un curso. Ingresar por cada alumno el nombre y dos notas. Por
cada alumno informar su nombre y el promedio de sus notas
*/
int main() {
    int cantidad;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad;
    for (int i = 1; i <= cantidad; i++)
    {
        string nombre;
        int nota1, nota2, promedio;
        cout << "Ingrese el nombre del alumno " << i << ": ";
        cin >> nombre;
        cout << "Ingrese la nota 1 del alumno " << i << " (" << nombre << "): ";
        cin >> nota1;
        cout << "Ingrese la nota 2 del alumno " << i << " (" << nombre << "): ";
        cin >> nota2;
        promedio = (nota1 + nota2) / 2;
        cout << "El promedio de las notas del alumno " << nombre << " es: " << promedio << endl;
    }
    
    return 0;
}