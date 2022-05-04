#include <iostream>

using namespace std;
/*
10) Una compañía aérea desea emitir un listado con los movimientos mensuales de sus M vuelos al
exterior.
Para ello cuenta con la siguiente información:
De cada vuelo realizado el número de vuelo, destino, y cantidad de asientos.
De cada pasajero el número de pasaporte y el importe que abonó por el pasaje en dólares.
La información de los pasajeros de cada vuelo finaliza con un número de pasaporte igual a cero.
Se pide emitir el siguiente listado:
Nro. de Vuelo ………. Destino: ………..
Nro. de Pasaporte Importe en u$s
…………. ………….
 …………. ………….
 Total recaudado del vuelo: ………
Cantidad de asientos libres: ………
Número de vuelo que más recaudó: ……..
*/
int main()
{
    //NOTA: FALTA FORMATEO DE RESPUESTAS
    int vuelosMensuales = 0;
    int vueloMasRecaudado = 0;
    int cantidadMasRecaudada = 0;
    int asientosLibresMasRecuadado = 0;
    cout << "Ingrese la cantidad de vuelos realizados en el mes: ";
    cin >> vuelosMensuales;
    for (int i = 1; i <= vuelosMensuales; i++)
    {
        cout << "--- VUELO " << i << " DEL MES ---" << endl;
        int vuelo = 0;
        int asientos = 0;
        string destino = "";
        cout << "Ingrese el numero de vuelo " << i << ": ";
        cin >> vuelo;
        cout << "Ingrese el destino del vuelo " << i << ": ";
        cin >> destino;
        cout << "Ingrese la cantidad de asientos del vuelo " << i << ": ";
        cin >> asientos;
        int pasajeros = 1;
        int importeTotal = 0;
        while(true)
        {
            cout << "Ingrese el numero de pasaporte del pasajero " << pasajeros << ": ";
            int pasaporte = 0;
            cin >> pasaporte;
            if (pasaporte == 0)
            {
                break;
            }
            cout << "Ingrese el importe del pasaje del pasajero " << pasajeros << ": ";
            int importe = 0;
            cin >> importe;
            importeTotal += importe;
            pasajeros++;
        }
        cout << "El total recaudado del vuelo " << i << " es: " << importeTotal << endl;
        cout << "La cantidad de asientos libres del vuelo " << i << " es: " << asientos - pasajeros << endl;
        if (i == 1 || importeTotal > cantidadMasRecaudada) { // "Si es el primer vuelo"
            vueloMasRecaudado = vuelo;
            cantidadMasRecaudada = importeTotal;
            asientosLibresMasRecuadado = asientos - pasajeros;
        }
    }
    cout << "El vuelo que más recaudó fue el " << vueloMasRecaudado << " con un total de $" << cantidadMasRecaudada << " y tenía " << asientosLibresMasRecuadado << " asientos libres." << endl;

    return 0;
}