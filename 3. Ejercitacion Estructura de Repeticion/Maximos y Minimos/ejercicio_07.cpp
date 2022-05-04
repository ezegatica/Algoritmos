#include <iostream>

using namespace std;
/*
7) Un jugador arroja 5 dados y se registra como puntaje la suma de los dos valores más altos. Dada
una serie de tiros, que finaliza al ingresar ‘N’ ante la consulta “Continúa? S/N”, determinar e
imprimir la cantidad de tiros, el máximo puntaje obtenido, y el puntaje promedio.
*/
int main()
{
    int puntaje = 0;
    int puntajeMaximo = 0;
    int cantidadTiros = 0;
    while (true)
    {
        // Asumo que los dados los debe poner el jugador
        int dado1 = 0;
        int dado2 = 0;
        int dado3 = 0;
        int dado4 = 0;
        int dado5 = 0;
        cout << "Ingrese el primer dado: ";
        cin >> dado1;
        cout << "Ingrese el segundo dado: ";
        cin >> dado2;
        cout << "Ingrese el tercer dado: ";
        cin >> dado3;
        cout << "Ingrese el cuarto dado: ";
        cin >> dado4;
        cout << "Ingrese el quinto dado: ";
        cin >> dado5;

        cantidadTiros++;
    }
    return 0;
}
