#include <iostream>

using namespace std;
/*
    12) Confeccionar un programa que pueda determinar el importe a pagar por una prestación
    médica según su código. Los importes se cobran según la siguiente tabla :
    Código Importe $
    A 200
    D 400
    F 600
    M 1500
    T 150 0
    Por cada prestación se debe ingresar el número de historia del paciente y el código de la
    prestación. Se debe emitir un ticket para cada uno, con el número de la historia, el código y el
    importe a pagar.
*/
int main()
{
    int historia;
    char codigo;
    cout << "Ingrese el numero de historia del paciente: ";
    cin >> historia;
    cout << "Ingrese el tipo de consulta, A, B, F, M o T: ";
    cin >> codigo;
    switch (codigo)
    {
    case 'A':
    case 'a':
        cout << "Paciente: " << historia << " - Codigo: " << codigo << " - Precio: $200" << endl;
        break;

    case 'D':
    case 'd':
        cout << "Paciente: " << historia << " - Codigo: " << codigo << " - Precio: $400" << endl;
        break;

    case 'F':
    case 'f':
        cout << "Paciente: " << historia << " - Codigo: " << codigo << " - Precio: $600" << endl;
        break;

    case 'M':
    case 'm':
    case 'T':
    case 't':
        cout << "Paciente: " << historia << " - Codigo: " << codigo << " - Precio: $1500" << endl;
        break;

    default:
        cout << "Seleccionó una opcion incorrecta!" << endl;
        break;
    }
    return 0;
}