#include <iostream>

using namespace std;
/*
12) De un censo realizado en una población se conocen los siguientes datos:
- Día de nacimiento (2 dig.)
- Mes (2 dig.)
- Año (4 dig.)
- Sexo ('M': masculino. 'F: femenino.)
Con estos datos de cada habitante se forma un lote finalizado con un día cero.
Desarrollar el programa que determine e imprima:
a) Cuántas personas corresponden a cada grupo etario.
Utilizar función del ejercicio 7
b) Cuántos nacimientos hubo en el mes de octubre de todos los años.
c) Cuántos nacimientos hubo antes del 9 de julio de 1990.
d) Cuántos nacimientos de mujeres hubo en la primavera del 1982.
e) Sexo de la persona más vieja (solo existe una).
Desarrollar y utilizar las funciones que considere necesarias.
*/
unsigned edadAGrupoEtario(unsigned edad)
{
    if (edad <= 14)
    {
        return 1;
    }
    else if (edad >= 15 && edad <= 21)
    {
        return 2;
    }
    else if (edad >= 22 && edad <= 28)
    {
        return 3;
    }
    else if (edad >= 29 && edad <= 35)
    {
        return 4;
    }
    else if (edad >= 36 && edad <= 42)
    {
        return 5;
    }
    else if (edad >= 43 && edad <= 49)
    {
        return 6;
    }
    else if (edad >= 50 && edad <= 63)
    {
        return 7;
    }
    else
    {
        return 8;
    }
}
int convertirAFecha(int año, int mes, int dia)
{
    return año * 10000 + mes * 100 + dia;
}
int fechaAEdad(int fechaActual, int fechaCompleta)
{
    return (fechaActual - fechaCompleta) / 10000;
}
void printGE(int grupo, int cantidad)
{
    cout << "La cantidad de personas en el grupo etario " << grupo << " es: " << cantidad << endl;
}
bool nacioEnPrimaveraDel1982(int fechaCompleta)
{
    return (fechaCompleta > 19820921 && fechaCompleta < 19821221);
}
bool esMujer(char sexo)
{
    return (sexo == 'F' || sexo == 'f');
}
bool nacioAntesDeJulioDe1990(int fechaCompleta)
{
    return (fechaCompleta < 19900709);
}
bool nacioEnOctubre(int mes)
{
    return mes == 10;
}
void print(string condicion, int cantidad)
{
    cout << "La cantidad de nacimientos " << condicion << " es: " << cantidad << endl;
}
int main()
{
    int dia, mes, año, fechaActual;
    int nacimientos_octubre = 0, nacimientos_antes_de_9_julio = 0, nacimientos_mujeres_primavera_1982 = 0;
    char sexo_mas_viejo;
    int edad_mas_vieja = 0;
    unsigned ge1 = 0, ge2 = 0, ge3 = 0, ge4 = 0, ge5 = 0, ge6 = 0, ge7 = 0, ge8 = 0;
    char sexo;
    cout << "Cual es la fecha del dia de hoy? (Formato AAAAMMDD, AÑO MES DIA, 20200106 sería 06 de Enero de 2021)" << endl;
    cin >> fechaActual;
    cout << "----" << endl;
    cout << "Ingrese el dia de nacimiento: ";
    cin >> dia;
    while (dia != 0)
    {
        cout << "Ingrese el mes de nacimiento: ";
        cin >> mes;
        cout << "Ingrese el año de nacimiento: ";
        cin >> año;
        cout << "Ingrese el sexo: ";
        cin >> sexo;
        int fechaCompleta = convertirAFecha(año, mes, dia);
        int edad = fechaAEdad(fechaActual, fechaCompleta);
        unsigned grupoEtario = edadAGrupoEtario(edad);
        switch (grupoEtario)
        {
            {
            case 1:
                ge1++;
                break;
            case 2:
                ge2++;
                break;
            case 3:
                ge3++;
                break;
            case 4:
                ge4++;
                break;
            case 5:
                ge5++;
                break;
            case 6:
                ge6++;
                break;
            case 7:
                ge7++;
                break;
            default:
                ge8++;
                break;
            }
        }
        if (nacioEnOctubre(mes))
        {
            nacimientos_octubre++;
        }
        if (nacioAntesDeJulioDe1990(fechaCompleta))
        {
            nacimientos_antes_de_9_julio++;
        }
        if (esMujer(sexo) && nacioEnPrimaveraDel1982(fechaCompleta))
        {
            nacimientos_mujeres_primavera_1982++;
        }
        if (edad > edad_mas_vieja)
        {
            edad_mas_vieja = edad;
            sexo_mas_viejo = sexo;
        }
        cout << "Ingrese el dia de nacimiento: ";
        cin >> dia;
    }
    print("en el mes de octubre de todos los años", nacimientos_octubre);
    print("antes del 9 de julio de 1990", nacimientos_antes_de_9_julio);
    print("de mujeres en la primavera del 1982", nacimientos_mujeres_primavera_1982);
    cout << "El sexo de la persona más vieja es: " << sexo_mas_viejo << endl;
    printGE(1, ge1);
    printGE(2, ge2);
    printGE(3, ge3);
    printGE(4, ge4);
    printGE(5, ge5);
    printGE(6, ge6);
    printGE(7, ge7);
    printGE(8, ge8);
    return 0;
}