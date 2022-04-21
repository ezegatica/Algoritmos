#include <iostream>

using namespace std;
/*
19) En un Banco se procesan datos de las cuentas corrientes de los clientes. De cada cuenta se
conocen: número de cuenta, nombre del cliente y saldo actual. Se pide escribir un algoritmo que
permita informar por cada cuenta: número y estado (acreedor o deudor). También informar la
cantidad de cuentas con saldo deudor, con saldo acreedor y con saldo nulo. Para fin de datos
ingresar un número de cuenta negativo.
*/
int main() {
    int acreedor = 0;
    int deudor = 0;
    int nulo = 0;
    while(true){
        int cuenta;
        string nombre;
        int saldo;
        cout << "Ingrese el numero de cuenta: ";
        cin >> cuenta;
        if (cuenta < 0) {
            break;
        }
        cout << "Ingrese el nombre del cliente: ";
        cin >> nombre;
        cout << "Ingrese el saldo: ";
        cin >> saldo;
        if (saldo < 0) {
            deudor++;
        } else if (saldo > 0) {
            acreedor++;
        } else {
            nulo++;
        }
    }
    cout << "La cantidad de cuentas con saldo deudor es: " << deudor << endl;
    cout << "La cantidad de cuentas con saldo acreedor es: " << acreedor << endl;
    cout << "La cantidad de cuentas con saldo nulo es: " << nulo << endl;
    return 0;
}