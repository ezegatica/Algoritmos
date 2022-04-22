#include <iostream>

using namespace std;
/*
9) Un buque de carga traslada contenedores a tres diferentes puertos del país. Los puertos se
identifican con los números 1, 2 y 3.
De cada contenedor que el buque traslade se registran los siguientes datos:
- Identificación del contenedor
- Peso del contenedor en kg
- Puerto de arribo (un valor de 1 a 3).
El ingreso de datos finaliza con la identificación de un contenedor igual a cero.
Se pide calcular e informar:
a) El peso total que el buque debe trasladar.
b) La identificación del contenedor de mayor peso.
c) La cantidad de contenedores que debe trasladar a cada puerto
*/
int main()
{
    int pesoTotal = 0;
    int masPesadoID = 0;
    int masPesadoCantidad = 0;
    int cantidadPuerto1 = 0;
    int cantidadPuerto2 = 0;
    int cantidadPuerto3 = 0;
    while (true)
    {
        int identificacion = 0;
        int peso = 0;
        int puerto = 0;
        cout << "Ingresa el identificador del contenedor: ";
        cin >> identificacion;
        if (identificacion == 0)
        {
            break;
        }
        cout << "Ingresa el peso del contenedor: ";
        cin >> peso;
        pesoTotal += peso;
        if (masPesadoCantidad == 0)
        {
            masPesadoID = identificacion;
            masPesadoCantidad = peso;
        }
        else if (peso > masPesadoCantidad)
        {
            masPesadoID = identificacion;
            masPesadoCantidad = peso;
        }
        cout << "Ingresa el puerto del pais al que se esta transladando (1, 2 o 3): ";
        cin >> puerto;
        switch (puerto)
        {
        case 1:
            cantidadPuerto1++;
            break;
        case 2:
            cantidadPuerto2++;
            break;
        case 3:
            cantidadPuerto3++;
            break;
        default:
            break;
        }
    }
    cout << "El peso total que el buque debe trasladar es: " << pesoTotal << "kg" << endl;
    cout << "La identificacion del contenedor mas pesado es: " << masPesadoID << ", con " << masPesadoCantidad << "kg." << endl;
    cout << "La cantidad de contenedores que debe trasladar a cada puerto es: " << endl;
    cout << "- Puerto 1: " << cantidadPuerto1 << endl;
    cout << "- Puerto 2: " << cantidadPuerto2 << endl;
    cout << "- Puerto 3: " << cantidadPuerto3 << endl;

    return 0;
}