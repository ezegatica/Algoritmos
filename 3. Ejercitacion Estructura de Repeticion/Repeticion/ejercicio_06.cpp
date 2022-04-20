#include <iostream>

using namespace std;
/*
6) Hacer un algoritmo que ingrese por teclado un número entero n y a continuación ingrese n
números más de los que tendrá que informar su promedio.
*/
int main() {
    int n;
    cout << "Ingrese la cantidad de números de series: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int n2;
        cout << "Ingrese la cantidad de numeros a agregar para la serie " << i << endl;
        cin >> n2;
        int promedio = 0;
        int cantidad = 0;
        for (int j = 1; j <= n2; j++)
        {
            int numero;
            cout << "Ingrese el número " << j << ": ";
            cin >> numero;
            promedio += numero;
            cantidad++;
        }
        cout << "(Serie "<< i << "): El promedio de los " << cantidad << " números es: " << promedio / cantidad << endl;
    }

    return 0;
}