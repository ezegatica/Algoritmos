#include <iostream>

using namespace std;
/*
2) Desarrollar una función tal que dado un número entero positivo calcule y retorne su
factorial.
*/

void calcular_factorial(int numeroActual, int &sumaProductos)
{
    if (numeroActual != 0)
    {
        sumaProductos = sumaProductos * numeroActual;
        calcular_factorial(numeroActual - 1, sumaProductos);
    }
}

int main()
{
    int numero, resultado = 1;
    cout << "Ingrese el numero a calcular dicho factorial" << endl;
    cin >> numero;
    calcular_factorial(numero, &resultado);
    cout << "Su factorial es: " << resultado << endl;
    return 0;
}