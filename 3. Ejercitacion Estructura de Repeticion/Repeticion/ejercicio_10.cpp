#include <iostream>

using namespace std;
/*
10) En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de todos contra
todos. Por cada partido disputado por un equipo se dispone de la siguiente información :
a) Nombre del equipo,
b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
Se arma un lote de datos con todos los resultados del torneo, agrupados por nombre del
equipo.
Desarrollar el programa que imprima:
Por cada equipo, su nombre y el puntaje total que obtuvo (suma 3 si gana, y 1 si empata)
*/
int main() {
    int k;
    cout << "Ingrese el numero de equipos: " << endl;
    cin >> k;
    for (int i = 1; i <= k; i++) // Pasamos por todos los equipos
    {
        string nombre;
        int puntaje = 0;
        cout << "Ingrese el nombre del equipo " << i << ": " << endl;
        cin >> nombre;
        for (int j = 1; j <= k; j++)
        {
        if (j == i) {
            continue; // Si un equipo juega con sigo mismo, se salta
        }
        char resultado;
            cout << "Ingrese el restultado del partido del equipo " << i << " contra el equipo " << j << endl;
            cout << "'P'= Perdido, 'E'= Empatado, 'G'= Ganado: ";
            cin >> resultado;
            switch (resultado){
                case 'G':
                case 'g':
                    puntaje += 3;
                    break;
                case 'E':
                case 'e':
                    puntaje += 1;
                    break;
                default:
                    break;
            }
        }
        cout << "El equipo " << nombre << " obtuvo un puntaje de " << puntaje << endl;        
    }
    
    return 0;
}