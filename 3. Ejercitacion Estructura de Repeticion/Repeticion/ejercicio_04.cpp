#include <iostream>

using namespace std;
/*
4) Informar la cantidad de números negativos que hay dentro de 20 números ingresados por teclado.
*/
int main() {
    int negativos = 0;
    for (int i = 1; i <= 20; i++)
    {
        int numero;
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;
        if (numero < 0)
        {
            negativos++;
        }
    }
    cout << "La cantidad de numeros negativos es: " << negativos << endl;
    return 0;
}