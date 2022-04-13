#include <iostream>

using namespace std;
/* 
    7) Dado tres valores que representan las longitudes de segmentos determinar e imprimir una
    leyenda según sea: “Forman triangulo” o “No forman triangulo”.
*/
int main() {
    int num1, num2, num3;
    cout << "Ingresar 3 valores de logitud de segmentos de un triangulo" << endl;
    cin >> num1 >> num2 >> num3;
    if ((num1 + num2 > num3) && (num1 + num3 > num2) && (num2 + num3 > num1)){
        cout << "Forma un triangulo" << endl;
    } else {
        cout << "No forma un triangulo" << endl;
    }
    return 0;
}