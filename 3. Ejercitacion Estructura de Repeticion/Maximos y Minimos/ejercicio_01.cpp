#include <iostream>

using namespace std;
/*
1) Dados 50 valores distintos que se ingresan por teclado, mostrar el menor.
*/
int main() {
    int menor = 0;
    for (int i = 1; i <= 10; i++) // Lo bajé a 10, pero la consigna dice 50
    {
        int input;
        cout << "Ingrese un numero (vamos por el " << i << "): " << endl;
        cin >> input;
        if (i == 1)
        {
            menor = input; // Esto es para que en la primera iteraion, el menor sea el primer numero ingresado
        }
        else
        {
            if (input < menor)
            {
                menor = input;
            }
        }
    }
    cout << "El menor es: " << menor << endl;
    return 0;
}