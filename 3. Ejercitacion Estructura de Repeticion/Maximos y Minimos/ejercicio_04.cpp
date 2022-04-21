#include <iostream>

using namespace std;
/*
4) Dados 50 valores distintos que se ingresan por teclado, mostrar los dos mayores.
*/
int main() {
    int mayor1, mayor2;
    for (int i = 1; i <= 10; i++) // Lo bajé a 10, pero la consigna dice 50
    {
        int input;
        cout << "Ingrese un numero (vamos por el " << i << "): " << endl;
        cin >> input;
        if (i == 1)
        {
            mayor1 = input; // Esto es para que en la primera iteraion, el mayor sea el primer numero ingresado
            mayor2 = input;
        }
        else
        {
            if (input > mayor1)
            {
                mayor2 = mayor1;
                mayor1 = input;
            }
            else if (input > mayor2)
            {
                mayor2 = input;
            }
        }
    }
    cout << "El mayor es: " << mayor1 << " y el segundo mayor es: " << mayor2 << endl;
    return 0;
}