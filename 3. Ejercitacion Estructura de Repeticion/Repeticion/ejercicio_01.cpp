#include <iostream>

using namespace std;
/*
1) Ingresar 10 números por teclado y mostrar sólo los positivos.
*/
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        int nro;
        cout << "Ingrese el numero de orden " << i << ": ";
        cin >> nro;
        if (nro > 0)
            cout << nro << endl;
    }

    return 0;
}