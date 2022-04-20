#include <iostream>

using namespace std;
/* 
18) Ingresar por teclado el nombre de un alumno, y a continuación la calificación que obtuvo para
cada materia rendida (hasta ingresar una calificación cero) por cada alumno de los 25 del curso.
Informar por cada alumno nombre y su promedio.
*/
int main() {
    for (int i = 1; i <= 25; i++)
    {
        string nombre;
        cout << "Ingrese el nombre del alumno: ";
        cin >> nombre;
        int suma = 0;
        int promedio = 0;
        int contador = 0;
        while (true)
        {
            int nota;
            cout << "Ingrese la calificacion: ";
            cin >> nota;
            if (nota == 0) {
                break;
            }
            suma += nota;
            contador++;
        }
        promedio = suma / contador;
        cout << "El promedio de '" << nombre << "' es: " << promedio << endl;
    }
        
    return 0;
}