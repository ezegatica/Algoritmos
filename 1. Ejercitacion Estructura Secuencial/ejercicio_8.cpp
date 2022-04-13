#include <iostream>

using namespace std;
// 8. Calcular el área y el perímetro de un rectángulo, dado la base y la altura.
int main() {
    int base, altura, area, perimetro;
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
    area = base * altura;
    perimetro = base + base + altura + altura;
    cout << "El area del rectangulo es: " << area  << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;
    return 0;
}