#include <iostream>

using namespace std;
/*
7) Desarrollar la función unsigned edadAGrupoEtario (unsigned edad) que retorne un valor de
1 a 8, de acuerdo al siguiente cuadro:
Edad Valor
Hasta 14 años 1
De 15 a 21 2
De 22 a 28 3
De 29 a 35 4
De 36 a 42 5
De 43 a 49 6
De 50 a 63 7
Mayores de 64 8
*/
unsigned edadAGrupoEtario(unsigned edad)
{
    if (edad <= 14)
    {
        return 1;
    }
    else if (edad >= 15 && edad <= 21)
    {
        return 2;
    }
    else if (edad >= 22 && edad <= 28)
    {
        return 3;
    }
    else if (edad >= 29 && edad <= 35)
    {
        return 4;
    }
    else if (edad >= 36 && edad <= 42)
    {
        return 5;
    }
    else if (edad >= 43 && edad <= 49)
    {
        return 6;
    }
    else if (edad >= 50 && edad <= 63)
    {
        return 7;
    }
    else
    {
        return 8;
    }
}
int main()
{
    unsigned edad;
    cout << "Ingrese la edad: ";
    cin >> edad;
    while (edad != 0)
    {
        cout << "La edad del grupo etario es: " << edadAGrupoEtario(edad) << endl;
        cout << "Ingrese la edad (ingrese 0 para terminar): ";
        cin >> edad;
    }
    return 0;
}