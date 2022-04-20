#include <iostream>

using namespace std;
/*
17) Dado un conjunto de triángulos representados por sus lados lado1, lado2 y lado3 dados como
datos, determinar e imprimir la cantidad de triángulos equiláteros, isósceles y escalenos. El
ingreso de datos finaliza cuando un lado es nulo.
*/
int main() {
    int lado1 = 0, lado2 = 0, lado3 = 0, equilateros = 0, isosceles = 0, escalenos = 0;
    while (true) {
        cout << "Ingrese el lado 1: ";
        cin >> lado1;
        if (lado1 == 0) {
            break;
        }
        cout << "Ingrese el lado 2: ";
        cin >> lado2;
        if (lado2 == 0){
            break;
        }
        cout << "Ingrese el lado 3: ";
        cin >> lado3;
        if (lado3 == 0) {
            break;
        }
        if (lado1 == lado2 && lado2 == lado3) {
            equilateros++;
        } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
            isosceles++;
        } else {
            escalenos++;
        }
    }  
    cout << "La cantidad de triangulos equilateros es: " << equilateros << endl;
    cout << "La cantidad de triangulos isosceles es: " << isosceles << endl;
    cout << "La cantidad de triangulos escalenos es: " << escalenos << endl;
    return 0;
}