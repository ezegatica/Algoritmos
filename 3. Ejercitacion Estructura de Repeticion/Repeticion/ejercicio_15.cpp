#include <iostream>

using namespace std;
/*
15) Ingresar edades comprendidas entre 18 y 22, e imprimir cuántas veces se ingresó cada una de estas
edades. El lote finaliza con una edad igual a cero.
*/
int main()
{
    int c18 = 0, c19 = 0, c20 = 0, c21 = 0, c22 = 0;
    while (true)
    {
        int edad;
        cout << "Ingrese la edad: ";
        cin >> edad;
        if (edad == 0)
        {
            break;
        }
        switch (edad)
        {
        case 18:
            c18++;
            break;
        case 19:
            c19++;
            break;
        case 20:
            c20++;
            break;
        case 21:
            c21++;
            break;
        case 22:
            c22++;
            break;
        default:
            break;
        }
    }
    cout << "La cantidad de alumnos de 18 años es: " << c18 << endl;
    cout << "La cantidad de alumnos de 19 años es: " << c19 << endl;
    cout << "La cantidad de alumnos de 20 años es: " << c20 << endl;
    cout << "La cantidad de alumnos de 21 años es: " << c21 << endl;
    cout << "La cantidad de alumnos de 22 años es: " << c22 << endl;
    return 0;
}