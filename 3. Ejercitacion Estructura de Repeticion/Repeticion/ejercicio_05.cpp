#include <iostream>

using namespace std;
/*
5) Calcular e informar la sumatoria de 10 números ingresados por teclado.
*/
int main() {
    int suma = 0;
    for (int i = 1; i <= 10; i++)
    {
        int numero;
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;
        suma += numero;
    }
    cout << "La suma de los 10 números es: " << suma << endl;  
    return 0;
}