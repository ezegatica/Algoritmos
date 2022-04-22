#include <iostream>

using namespace std;
/*
6) Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un
Nombre = ‘FIN’, informar el nombre de la persona con mayor edad y el de la más joven.
*/
int main() {
    // No tenia ganas asi que puse la fehca de una, pero aplicar el famoso algoritmo para sacar la fecha que nos dio la profe, esta en la ejercitacion 1
    // Si alguien tiene ganas de hacerlo, hagan un PR o hablenme por whatsapp para que cambie este archivo
    string nombreMayor = "";
    int edadMenor = 0;
    int edadMayor = 0;
    while(true){
        string nombre;
        int edad;
        cout << "Ingrese un nombre: ";
        cin >> nombre;
        if(nombre == "FIN"){
            break;
        }
        cout << "Ingrese una edad: ";
        cin >> edad;
        if (edadMenor == 0) {
            edadMenor = edad;
            edadMayor = edad;
            nombreMayor = nombre;
        }
        if (edad < edadMenor){
            edadMenor = edad;
        }
        if (edad > edadMayor){
            edadMayor = edad;
            nombreMayor = nombre;
        }
    }
    cout << "El nombre de la persona con mayor edad es: '" << nombreMayor << "' con una edad de: " << edadMayor << endl;
    cout << "La persona con menos edad tiene " << edadMenor << endl;
    return 0;
}