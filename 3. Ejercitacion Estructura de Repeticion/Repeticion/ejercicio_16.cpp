#include <iostream>

using namespace std;
/*
16) Hacer un algoritmo que calcule e informe el factorial de números positivos ingresados por teclado.
El lote de números finaliza con cero. 
*/
int main() {
    while (true) {
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero == 0) {
            break;
        }
        int factorial = 1;
        for (int i = 1; i <= numero; i++) {
            factorial *= i;
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }
    return 0;
}