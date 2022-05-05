#include <iostream>

using namespace std;
/*
10) Desarrollar un procedimiento tal que dada una hora (HHMMSS) y un tiempo también en
formato HHMMSS devuelva la nueva hora que surge de sumar el tiempo a la hora inicial,
considere también si cambió el día.
*/
int calcular(int hora, int tiempo)
{
    int hora_horas = hora / 10000;
    int hora_minutos = hora / 100 - hora_horas * 100;
    int hora_segundos = hora - hora_horas * 10000 - hora_minutos * 100;
    int tiempo_horas = tiempo / 10000;
    int tiempo_minutos =  tiempo / 100 - tiempo_horas * 100;
    int tiempo_segundos = tiempo - tiempo_horas * 10000 - tiempo_minutos * 100;
    int segundos_final = tiempo_segundos + hora_segundos;
    if (segundos_final >= 60){
        segundos_final = segundos_final - 60;
        hora_minutos += 1;
    }
    int minutos_final = tiempo_minutos + hora_minutos;
    if (minutos_final >= 60){
        minutos_final = minutos_final - 60;
        hora_horas += 1;
    }
    int horas_final = tiempo_horas + hora_horas;
    int dias_final = 0;
    if (horas_final >= 24){
        horas_final = horas_final - 24;
        dias_final += 1;
    }
    int hora_final = dias_final * 1000000 + horas_final * 10000 + minutos_final * 100 + segundos_final;
    return hora_final;
}
int main()
{
    int hora, tiempo;
    cout << "Ingrese la hora actual (HHMMSS): ";
    cin >> hora;
    cout << "Ingrese el tiempo a pasar (HHMMSS): ";
    cin >> tiempo;
    int resultado = calcular(hora, tiempo);
    cout << "La hora resultante es " << resultado << endl;
    return 0;
}