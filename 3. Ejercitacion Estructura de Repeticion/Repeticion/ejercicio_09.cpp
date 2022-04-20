#include <iostream>

using namespace std;
/*
9) Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los
menores que –10.
*/
int main() {
    int numerosMayoresA100, cantidadMenoresA100, sumaMenoresAMenos10, PromedioNumerosMayoresA100;
    cout << "Ingrese 50 números enteros: " << endl;
    for (int i = 1; i <= 5; ++i) {
        int numero;
        cin >> numero;
        if (numero > 100) {
            numerosMayoresA100 += numero;
            cantidadMenoresA100++;
        }
        if (numero < -10) {
            sumaMenoresAMenos10 += numero; // Esto causa un problema con el tema de los bits de la variable, es ocmo que hace un overflow para abajo y se reinicia
        }
    }
    PromedioNumerosMayoresA100 = numerosMayoresA100 / cantidadMenoresA100;
    cout << "El promedio de los números mayores a 100 es: " << PromedioNumerosMayoresA100 << endl;
    cout << "La suma de los números menores a -10 es: " << sumaMenoresAMenos10 << endl;
    return 0;
}