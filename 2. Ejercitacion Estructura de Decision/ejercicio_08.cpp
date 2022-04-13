#include <iostream>

using namespace std;
/*
    8) Dados tres valores que representan los lados de un triángulo, informar si el mismo es
    equilátero, isósceles o escaleno.
*/
int main() {
    int num1, num2, num3;
    cout << "Ingrese 3 valores de longitud de lados de triangulo" << endl;
    cin >> num1 >> num2 >> num3;
    if (num1 == num2 && num1 == num3){
        cout << "Forma un triangulo equilatero" << endl;
    } else {
        if ((num1 == num2 && num1 != num3) || (num2 == num3 && num2 != num1) || (num1 == num3 && num1 != num2)){
            cout << "Forma un triangulo isoceles" << endl;
        } else {
            cout << "Forma un triangulo escaleno" << endl;
        }
    }
    return 0;
}