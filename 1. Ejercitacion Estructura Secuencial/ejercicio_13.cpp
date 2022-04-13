#include <iostream>

using namespace std;
/* 
En una empresa automotriz existen 3 áreas: Ensambladora, Pintura y Eléctrica. El
presupuesto anual de la empresa se reparte de la siguiente manera:
    Área            Presupuesto
    Ensambladora    37%
    Pintura         42%
    Eléctrica       21%
Obtener la cantidad de dinero que recibirá cada área para un monto presupuestal que se
ingresa.
*/
int main() {
    int presupuestoTotal, presupuestoEnsambladora, presupuestoPintura, presupuestoElectrica;
    cout << "Ingrese el presupuesto total: ";
    cin >> presupuestoTotal;
    presupuestoEnsambladora = (presupuestoTotal * 37 ) / 100;
    presupuestoPintura = (presupuestoTotal * 42) / 100;
    presupuestoElectrica = (presupuestoTotal * 21) / 100;
    cout << "El area de 'Ensambladora' recibirá " << presupuestoEnsambladora << endl;
    cout << "El area de 'Pintura' recibirá " << presupuestoPintura << endl;
    cout << "El area de 'Electrica' recibirá " << presupuestoElectrica << endl;

    return 0;
}