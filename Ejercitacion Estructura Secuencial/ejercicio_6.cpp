#include <iostream>

using namespace std;
// 6. Dadas las notas de cuatro exámenes, mostrar la nota promedio.

int main() {
    int nota1, nota2, nota3, nota4, promedio;
    cout << "Ingresar la nota del examen 1: ";
    cin >> nota1;
    cout << "Ingresar la nota del examen 2: ";
    cin >> nota2;
    cout << "Ingresar la nota del examen 3: ";
    cin >> nota3;
    cout << "Ingresar la nota del examen 4: ";
    cin >> nota4;
    promedio = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "El promedio del alumno es de: " << promedio << endl;
    return 0;
}