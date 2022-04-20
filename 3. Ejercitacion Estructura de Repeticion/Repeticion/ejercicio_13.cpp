#include <iostream>

using namespace std;
/*
13) Hacer un algoritmo que calcule el promedio de números enteros positivos ingresados por teclado
hasta que se ingrese un cero. Este cero sólo indica el fin de ingreso de datos, no se incluirá en el
promedio.
*/
int main() {
    int suma, cantidad, promedio = 0;
    bool continuar = true;
    while(continuar) {
        int numero = 0;
        cout << "Ingrese un numero entero positivo: " << endl;
        cin >> numero;
        if (numero == 0) {
            continuar = false;
            break;
        }
        suma = suma + numero;
        cantidad++;
    }
    cout << "El promedio de los números ingresados es: " << promedio << endl;
    return 0;
}