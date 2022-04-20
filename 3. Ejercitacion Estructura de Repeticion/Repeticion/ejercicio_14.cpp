#include <iostream>

using namespace std;
/*
14) Desarrollar un algoritmo que permita ingresar un conjunto de valores, cada uno de los cuales
representa el sueldo de un empleado (se sabe que un sueldo igual a 0 indica el fin del conjunto), e
informe:
a) Cuántos empleados ganan menos de $900
b) Cuántos ganan $900 o más, pero menos de $1200
c) Cuántos ganan $1200 o más, pero menos de $2000
d) Cuántos ganan $2000 o más.
*/
int main()
{
    int cantidad = 0, a = 0, b = 0, c = 0, d = 0;
    while (true)
    {
        int sueldo;
        cout << "Ingrese un sueldo: " << endl;
        cin >> sueldo;
        if (sueldo == 0)
        {
            break;
        }
        if (sueldo < 900)
        {
            a++;
        }
        if (sueldo >= 900 && sueldo < 1200)
        {
            b++;
        }
        if (sueldo >= 1200 && sueldo < 2000)
        {
            c++;
        }
        if (sueldo >= 2000)
        {
            d++;
        }
        cantidad++;
    }
    cout << "Cantidad de empleados que ganan menos de $900: " << a << " (" << (a * 100) / cantidad << "%)" << endl;
    cout << "Cantidad de empleados que ganan $900 o más, pero menos de $1200: " << b << " (" << (b * 100) / cantidad << "%)" << endl;
    cout << "Cantidad de empleados que ganan $1200 o más, pero menos de $2000: " << c << " (" << (c * 100) / cantidad << "%)" << endl;
    cout << "Cantidad de empleados que ganan $2000 o más: " << d << " (" << (d * 100) / cantidad << "%)" << endl;
    return 0;
}