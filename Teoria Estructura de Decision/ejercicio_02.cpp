#include <iostream>

using namespace std;

int main()
{
    int nro, resto;
    cout << "Ingrese un numero: ";
    cin >> nro;
    resto = nro % 2;
    if (resto % 2 == 0)
    {
        cout << "El numero es par!" << endl;
    }
    else
    {
        cout << "El numero es impar!" << endl;
    }

    return 0;
}