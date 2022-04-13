#include <iostream>

using namespace std;
// 12.Se desea calcular el valor del cambio de monedas en Dólares y Euros ingresando la
// cantidad en Pesos. 
int main() {
    int valorDolar, valorEuro, pesos, costoDolar, costoEuros;
    cout << "Ingrese el valor del dolar actual: $";
    cin >> valorDolar;
    cout << "Ingrese el valor del euro actual: $";
    cin >> valorEuro;
    cout << "Ingrese la cantidad de pesos que desea cambiar: ";
    cin >> pesos;
    costoDolar = pesos / valorDolar;
    costoEuros = pesos / valorEuro;
    cout << "Puede comprar " << costoDolar << " dolares con " << pesos << " pesos." << endl;
    cout << "Puede comprar " << costoEuros << " euros con " << pesos << " pesos." << endl;
    return 0;
}