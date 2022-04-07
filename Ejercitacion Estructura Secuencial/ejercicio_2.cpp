#include <iostream>

using namespace std;
/*
Leer dos números y encontrar:
    a. La suma del doble del primero mas el cuadrado del segundo.
    b. El promedio de sus cubos.
*/
int main() {
    int num1, num2, resA, resB;
    cout << "Ingrese un número" << endl;
    cin >> num1;
    cout << "Ingrese otro número" << endl;
    cin >> num2;
    resA = (num1 + num1) + (num2 * num2);
    resB = ( (num1 * num1 * num1) + (num2 * num2 * num2) ) / 2;
    cout << "La suma del doble del primero mas el cuadrado del segundo es: " << resA << endl;
    cout << "El promedio de sus cubos es: " << resB << endl;
    return 0;
}