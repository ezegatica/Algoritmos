#include <iostream>

using namespace std;
/*
12) Dado un número entero positivo informar su factorial.
*/
int main() {
    int n;
    cout << "Ingrese un numero entero positivo: " << endl;
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "El factorial de " << n << " es: " << factorial << endl;  
    return 0;
}