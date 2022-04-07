#include <iostream>

using namespace std;
// 1. Dados 3 números enteros positivos, muestre la suma, la resta y la multiplicación de todos.

int main() {
    int num1, num2, suma;
    cout << "Ingrese un número" << endl;
    cin >> num1;
    cout << "Ingrese otro número" << endl;
    cin >> num2;
    suma = num1 + num2;
    cout << "La suma es: " << suma << endl;

    return 0; // Para que no rompa
}