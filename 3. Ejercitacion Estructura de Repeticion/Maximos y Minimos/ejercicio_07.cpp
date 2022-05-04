#include <iostream>

using namespace std;
/*
7) Un jugador arroja 5 dados y se registra como puntaje la suma de los dos valores más altos. Dada
una serie de tiros, que finaliza al ingresar ‘N’ ante la consulta “Continúa? S/N”, determinar e
imprimir la cantidad de tiros, el máximo puntaje obtenido, y el puntaje promedio.
*/
int main()
{
    int puntaje;
    int puntajeTotal = 0;
    int puntajeMaximo = 0;
    int cantidadTiros = 0;
    char continuar = 's';
    while (continuar != 'N' || continuar != 'n')
    {
        puntaje = 0;
        int mayor1;
        int mayor2;
        for (unsigned i = 1; i <= 5; i++)
        {
            int input;
            cout << "Ingrese un valor del dado (vamos por el " << i << "): " << endl;
            cin >> input;
            if (i == 1)
            {
                mayor1 = input;
                mayor2 = input;
            }
            else
            {
                if (input > mayor1)
                {
                    mayor2 = mayor1;
                    mayor1 = input;
                }
                else if (input > mayor2)
                {
                    mayor2 = input;
                }
            }
        }
        puntaje += mayor1 + mayor2;
        cout << "Puntaje de esta tirada: " << puntaje << endl;
        if (puntaje > puntajeMaximo)
        {
            puntajeMaximo = puntaje;
        }
        cantidadTiros++;
        puntajeTotal += puntaje;
        cout << "Continua? S/N" << endl;
        cin >> continuar;
    }
    cout << "Cantidad de tiros: " << cantidadTiros << endl;
    cout << "Puntaje máximo: " << puntajeMaximo << endl;
    cout << "Puntaje promedio: " << puntajeTotal / cantidadTiros << endl;
    return 0;
}
