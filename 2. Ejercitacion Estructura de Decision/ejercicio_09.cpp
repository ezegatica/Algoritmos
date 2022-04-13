#include <iostream>

using namespace std;
/*
    9) Dado un número de cinco cifras informar si es capicúa.
*/
int main() {
    int num, digito1, digito2, digito3, digito4, digito5;
    cout << "Ingrese un numero de 5 cifras" << endl;
    cin >> num;
    digito1 = num / 10000;
    digito2 = num / 1000 - digito1 * 10; // Esto lo que hace es pasar de 81 a 1, ya que 81 - (8 * 10 = 80) = 1 (digito2)
    digito3 = num / 100 - digito1 * 100 - digito2 * 10;
    digito4 = num / 10 - digito1 * 1000 - digito2 * 100 - digito3 * 10;
    digito5 = num / 1 - digito1 * 10000 - digito2 * 1000 - digito3 * 100 - digito4 * 10;
    if (digito1 == digito5 && digito2 == digito4){
        cout << "El numero es capicua" << endl;
    } else {
        cout << "El numero no es capicua" << endl;
    }
    return 0;
}