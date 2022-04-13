#include <iostream>

using namespace std;
// Dados 3 numeros, informar el mayor de los 3
int main()
{
    int num1, num2, num3;
    cout << "Ingresar un numero: ";
    cin >> num1;
    cout << "Ingresar otro numero: ";
    cin >> num2;
    cout << "Ingresar un ultimo numero: ";
    cin >> num3;
    cout << "----------" << endl;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "El mayor es el num1: " << num1 << endl;
        }
        else
        {
            cout << "El mayor es el num3: " << num3 << endl;
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << "El mayor es el num2: " << num2 << endl;
        }
        else
        {
            cout << "El mayor es el num3: " << num3 << endl;
        }
    }
    return 0;
}