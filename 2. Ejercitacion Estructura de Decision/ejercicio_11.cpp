#include <iostream>

using namespace std;
/*
Un negocio vende distintos artículos identificados por un código, según se muestra:
.código 1; 10 ; 100: l0 pesos la unidad
.código 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
.código 3; 33: 3 pesos la unidad. Si la compra es por más de 10 unidades se hace un
descuento del 10% sobre el total.
.código 4; 44: 2 peso la unidad.
Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a
comprar y se informe el importe de la compra:
 ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx
 */

// FORMATEAR LA RESPUESTA COMO PIDE

int main()
{
    int codigo, cantidad;
    cout << "Ingrese un numero de articulo: ";
    cin >> codigo;
    cout << "Ingrese la cantidad de articulos a comprar: ";
    cin >> cantidad;
    switch (codigo)
    {
    case 1:
    case 10:
    case 100:
        cout << "Valor: $" << 10 * cantidad << endl;
        break;
    case 2:
    case 22:
    case 222:
        if (cantidad % 10 == 0)
        {
            int cantidadDeCajas = cantidad / 10;
            cout << "Valor: $" << 65 * cantidadDeCajas << endl;
        }
        else
        {
            cout << "Valor: $" << 7 * cantidad << endl;
        }
        break;
    case 3:
    case 33:
        if (cantidad > 10)
        {
            cout << "Valor: $" << ((3 * cantidad) * 0.9) << endl;
        }
        else
        {
            cout << "Valor: $" << 3 * cantidad << endl;
        }
        break;
    case 4:
    case 44:
        cout << "Valor: $" << 2 * cantidad << endl;
        break;
    default:
        break;
    }
    return 0;
}