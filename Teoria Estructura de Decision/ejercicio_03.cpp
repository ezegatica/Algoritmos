#include <iostream>

using namespace std;
/*
    3) Se ingresan dos valores por teclado si el primero es mayor al segundo, informar la resta de los
valores, en caso contrario la suma.
*/
int main() {
    int num1, num2;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    if (num1 > num2){
        int resta = num1 - num2;
        cout << "La resta de los numeros es: " << resta << endl;
    }else {
        int suma = num1 + num2;
        cout << "La suma de los numeros es: " << suma << endl;
    }
    return 0;
}