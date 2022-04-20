#include <iostream>

using namespace std;
/*
3) Informar los primeros n números pares positivos, siendo n un número entero positivo ingresado
por teclado.
*/
int main() {
    int n;
    cout << "Ingrese la cantidad de números pares positivos: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i * 2 << " ";
    }  
    cout << "" << endl;
    return 0;
}