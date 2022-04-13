#include <iostream>

using namespace std;
/* 
14.Un empresario constructor sabe que necesita 0,5 metros cúbicos de arena por metro
cuadrado de revoque a realizar. Hacer un programa donde ingrese las medidas de una
pared (largo y alto) expresada en metros y obtenga la cantidad de arena necesaria para
revocarla
*/
int main() {
    int largo, alto, superficie, cantidadNecesaria;
    float arenaPorMetroCuadrado = 0.5f;
    cout << "Ingrese el largo de la pared: ";
    cin >> largo;
    cout << "Ingrese el alto de la pared: ";
    cin >> alto;
    superficie = largo * alto;
    cantidadNecesaria = superficie * arenaPorMetroCuadrado;
    cout << "Se necesitan " << cantidadNecesaria << " metros cubicos de arena" << endl;
    return 0;
}