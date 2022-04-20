#include <iostream>

using namespace std;
/*
8) Dado un número entero positivo entre 1 y 3999 informar su correspondiente número Romano.
*/
int main()
{
    int n;
    cout << "Ingrese un número entero positivo entre 1 y 3999: ";
    cin >> n;

    const string letrasRomanas[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"}; // declaros los valores en string de los numeros romanos
    const int valoresRomanos[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; // Declaro los valores numericos de los numeros romanos (siguiendo el orden de arriba)

    string resultado = "";

    for (int i = 0; i < 13; ++i) // Itero por todos los numeros romanos
    {
        while (n - valoresRomanos[i] >= 0) // Si el numero ingresado menos el valor romano actual es menor a 0, significa que me "paso" de este valor (comparar 999 con 1000(M))
        {
            resultado += letrasRomanas[i]; // Agrego la letra romana al resultado a enviar
            n -= valoresRomanos[i]; // Resto del numero total el digito, asi vamos reduciendo la cantidad de numeros a comparar
        }
    }
    cout << resultado << endl;

    return 0;
}