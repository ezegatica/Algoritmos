#include <iostream>

using namespace std;
/*
9) Desarrollar una función tal que dada una fecha en formato número de 8 dígitos
(AAAAMMDD), devuelva el día, el mes y el año correspondientes.
*/
void desformatear(int fecha, int &dia, int &mes, int &año){
    año = fecha / 10000;
    mes = (fecha % 10000) / 100;
    dia = fecha % 100;
}
int main() {
    int fecha, dia, mes, año;
    cout << "Ingrese la fecha: ";
    cin >> fecha;
    desformatear(fecha, dia, mes, año);
    cout << "El dia es " << dia << ", el mes es " << mes << " y el año es " << año << endl;
    return 0;
}