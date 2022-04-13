#include <iostream>

using namespace std;
/*
    Confeccionar un programa que solicite dos valores reales positivos, expresados en cm. El
    primero corresponde a la base y el segundo a la altura de un triángulo, se desea calcular el
    valor de la superficie. Si la superficie calculada es menor a 100 cm2, expresarla en milímetros cuadrados, 
    caso contrario en metros cuadrados. 
    Informar resultado con unidades. (1 m2 = 10.000 cm2)
*/
int main() {
    int base, altura, superficie;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    superficie = (base * altura) / 2;
    if (superficie < 100) {
        cout << "El triangulo tiene " << superficie * 100 << " mm cuadrados." << endl;
    } else {
        cout << "El triangulo tiene " << superficie / 10000 << " m cuadrados." << endl;
    }
    return 0;
}