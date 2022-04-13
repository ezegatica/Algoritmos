#include <iostream>

using namespace std;
// 4. Elabore un programa que calcule la edad de una persona.
int main2() {
    int añoDeNacimiento, añoActual, resultado;
    cout << "Ingrese su año de nacimiento: ";
    cin >> añoDeNacimiento;
    cout << "Ingrese el año actual: ";
    cin >> añoActual;
    resultado = añoActual - añoDeNacimiento;
    cout << "Su edad puede ser: " << resultado << " o " << resultado - 1 << endl; // Se hace ese resta - 1 ya que puede ser que la persona cumpla despues de el dia actual
    return 0;
}

// DESAFIO: Hacer que tenga en cuenta los meses con esa formula que dejó en el pizarron

int main() {
    int fechaDeNacimiento, fechaActual, resultado, resta;
    cout << "Cual es la fecha del dia de hoy? (Formato AAAAMMDD, AÑO MES DIA, 20200106 sería 06 de Enero de 2021)" << endl;
    cin >> fechaActual;
    cout << "Cual es tu fecha de nacimiento? (Mismo formato que antes, AAAAMMDD)" << endl;
    cin >> fechaDeNacimiento;
    resta = fechaActual - fechaDeNacimiento;
    resultado = resta / 10000; // El resultado de resta seria algo asi como 189184, el cual la fecha es 18 y el resto son los meses y dias, al dividirlo por 10000 estoy removiendo estos digitos, dejando solo el digito 1 y 2, formando asi el año
    cout << "Tu edad es: " << resultado << endl;
    return 0;
}