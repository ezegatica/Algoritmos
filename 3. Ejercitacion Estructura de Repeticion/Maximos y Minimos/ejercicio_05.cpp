#include <iostream>

using namespace std;
/*
5) Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo
valores):
a) El valor máximo negativo
b) El valor mínimo positivo
d) El promedio de todos los valores.
*/
int main()
{
    int cantidad = 0, suma = 0, promedio = 0;
    int maximoNegativo = 0, minimoPositivo = 0;
    int input;
    cout << "Ingrese un numero: ";
    cin >> input;
    while (input != 0)
    {

        if (maximoNegativo == 0 && input < 0)
        {
            maximoNegativo = input;
        }
        if (minimoPositivo == 0 && input > 0)
        {
            minimoPositivo = input;
        }
        if (input > maximoNegativo && input < 0)
        {
            maximoNegativo = input;
        }
        if (input < minimoPositivo && input > 0)
        {
            minimoPositivo = input;
        }
        suma += input;
        cantidad++;
        cout << "Ingrese un numero: ";
        cin >> input;
    }
    promedio = suma / cantidad;
    cout << "El valor maximo negativo es: " << maximoNegativo << endl;
    cout << "El valor minimo positivo es: " << minimoPositivo << endl;
    cout << "El promedio de todos los valores es: " << promedio << endl;
    return 0;
}