#include <iostream>

using namespace std;
/*
3) Desarrollar una función que dados dos números, retorne verdadero si el primero es múltiplo
del segundo, falso en caso contrario.
*/
bool esMultiplo(int numero1, int numero2)
{
    if (numero1 % numero2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    int n1, n2;
    cout << "Ingrese el primer numero" << endl;
    cin >> n1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> n2;
    if (esMultiplo(n1, n2))
    {
        cout << "El numero " << n1 << " es multiplo del numero " << n2 << endl;
    }
    else
    {
        cout << "El numero " << n1 << " no es multiplo del numero " << n2 << endl;
    }
    return 0;
}