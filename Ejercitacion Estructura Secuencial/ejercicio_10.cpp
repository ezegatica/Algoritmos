#include <iostream>
#include <math.h>

using namespace std;
/* 
    10.Dado la longitud de los dos catetos de un triángulo rectángulo y mostrar la longitud de la
    hipotenusa.
*/
int main() {
    int cateto1, cateto2; 
    double hipotenusa;
    // Es el teorema de pitagoras
    cout << "Cuanto mide el cateto 1?: ";
    cin >> cateto1;
    cout << "Cuanto mide el cateto 2?: ";
    cin >> cateto2;
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    cout << "El valor de la hipotenusa del triangulo es: " << hipotenusa << endl;
    return 0;
}