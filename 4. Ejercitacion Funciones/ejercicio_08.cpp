#include <iostream>

using namespace std;
/*
8) Desarrollar una función que dados el día, el mes y el año de una fecha correcta, devuelva la
misma en formato de entero de 8 dígitos con el formato AAAAMMDD.
*/
int formatear(int d, int m, int a){
    int fecha;
    fecha = a * 10000;
    fecha += m * 100;
    fecha += d;
    return fecha;
}
int main() {
    int dia, mes, año, fecha;
    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> año;
    fecha = formatear(dia, mes, año);
    cout << fecha << endl;
    return 0;
}