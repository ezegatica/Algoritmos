#include <iostream>

using namespace std;
/*
2) Dados 50 valores distintos que se ingresan por teclado, mostrar en qué posición se ingresó el mayor
*/
int main() {
    int mayor, posicion;
    for (int i = 1; i <= 10; i++) // Lo bajé a 10, pero la consigna dice 50
    {
        int input;
        cout << "Ingrese un numero (vamos por el " << i << "): " << endl;
        cin >> input;
        if (i == 1)
        {
            mayor = input; // Esto es para que en la primera iteraion, el mayor sea el primer numero ingresado
            posicion = i;
        }
        else
        {
            if (input > mayor)
            {
                mayor = input;
                posicion = i;
            }
        }
    }
    cout << "El mayor es: " << mayor << " y se ingreso en la posicion: " << posicion << endl;
    return 0;
}