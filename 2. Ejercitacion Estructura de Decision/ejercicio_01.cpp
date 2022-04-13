#include <iostream>

using namespace std;
/*
    1) Dados dos valores que se ingresan por teclado, mostrar por pantalla el menor de ellos.
*/
int main() {
    int num1, num2;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    if (num1 < num2) {
        cout << "El numero menor es " << num1 << endl;
    } else {
        cout << "El numero menor es " << num2 << endl;
    }

    return 0;
}