#include <iostream>

using namespace std;
/*
    10) Hacer un algoritmo que ingresando por teclado el mes (1 a 12) y el año (4 dígitos), informe la
    cantidad de días que tiene el mes.
*/
int main()
{
    int mes, año;
    cout << "Ingrese el mes" << endl;
    cin >> mes;
    cout << "Ingrese el año" << endl;
    cin >> año;

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Tiene 31 dias" << endl;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Tiene 30 dias" << endl;
        break;

    case 2:
        if (año % 4 == 0 && año % 400 == 0)
        {
            cout << "Tiene 29 dias" << endl;
        }
        else
        {
            cout << "Tiene 28 dias" << endl;
        }
        break;

    default:
        cout << "Error! Ingreso un numero fuera del rango (1-12)" << endl;
        break;
    }
    return 0;
}