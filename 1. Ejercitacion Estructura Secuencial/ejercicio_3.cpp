#include <iostream>

using namespace std;

/* 
    Determinar la suma de las cifras de un número entero positivo de 4 cifras. Ejemplo: Dado
    8125, la suma es 16. 
 */
int main() {
    int num, digito1, digito2, digito3, digito4, suma;
    cout << "Ingrese un numero de 4 cifras" << endl;
    // Hagamos de cuenta que el usuario es bueno y no puso ninguna letra ni nada
    cin >> num;
    digito1 = num / 1000;
    digito2 = num / 100 - digito1 * 10; // Esto lo que hace es pasar de 81 a 1, ya que 81 - (8 * 10 = 80) = 1 (digito2)
    digito3 = num / 10 - digito1 * 100 - digito2 * 10;
    digito4 = num - digito1 * 1000 - digito2 * 100 - digito3 * 10;
    suma = digito1 + digito2 + digito3 + digito4;
    cout << "La suma de los digitos del numero es: " << suma << endl;
    return 0;
}