#include <iostream>

using namespace std;
/*
1) Desarrollar una función que calcule el máximo común divisor de dos números enteros A, B
con el siguiente algoritmo:
1. Dividir A por B, y calcular el resto (0 < R < B)
2. Si R = 0, el MCD es B, si no seguir en 3.
3. Reemplazar A por B, B por R, y volver al paso 1.
*/

int calcular_mcd(int a, int b)
{
    int r = a % b;
    if (r == 0)
    {
        return b;
    }
    else
    {
        return calcular_mcd(b, r);
    }
}

int main()
{
    int a = 0, b = 0, mcd = 0;
    cout << "Ingrese el primer número: " << endl;
    cin >> a;
    cout << "Ingrese el segundo número: " << endl;
    cin >> b;
    mcd = calcular_mcd(a, b);
    cout << "El máximo común divisor de " << a << " y " << b << " es: " << mcd << endl;
    return 0;
}
