#include <iostream>

using namespace std;
/*
    2) Dado un número que se ingresa por teclado, informar si es par o impar.
*/
int main()
{
    int nro, resto;
    cout << "Ingrese un numero: ";
    cin >> nro;
    resto = nro % 2;
    if (resto == 0)
    {
        cout << "El numero es par!" << endl;
    }
    else
    {
        cout << "El numero es impar!" << endl;
    }

    return 0;
}