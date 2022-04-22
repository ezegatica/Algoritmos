#include <iostream>

using namespace std;
/*
8) El gobierno de la Ciudad de Buenos Aires realiza una encuesta en casas de familia. De cada
familia encuestada se conoce: domicilio, tipo de vivienda (‘C’: casa, ‘D’: departamento) y
cantidad de integrantes.
De cada integrante de la familia se conoce: nombre y apellido, edad, sexo (‘F’, ‘M’), nivel de
estudios alcanzados (‘N’: no posee, ‘P’: primario, ‘S’: secundario, ‘T’: terciario), y un indicador
(‘I’: Incompleto, ‘C’: Completo) referente al ítem anterior.
Se identifica el fin de ingreso de datos con un cero como cantidad de integrantes.
Informar:
a) La cantidad de encuestados que han completado los estudios primarios,
b) el porcentaje de analfabetismo en la ciudad (se consideran analfabetos a los mayores de
10 años que no poseen estudios),
c) el domicilio de la familia con mayor cantidad de integrantes que viven en un
departamento,
d) la edad promedio de todos los habitantes de la ciudad,
e) la mayor edad promedio de las familias,
f) la cantidad de encuestados con estudios secundarios incompletos,
g) el porcentaje de encuestados de sexo femenino con estudios terciarios completos.
*/
int main()
{
    int estudios_primarios_completos = 0;
    int analfabetos = 0;
    int porcentaje_analfabetos = 0;
    int cantidad_personas_encuestadas = 0;
    int cantidad_viviendas_encuestadas = 0;
    int mayor_cantidad_integrantes = 0;
    string domicilio_mayor_cantidad_integrantes = "";
    int suma_edades = 0;
    int promedio_edades = 0;
    int mayor_promedio_edades = 0;
    int cantidad_estudios_secundarios_incompletos = 0;
    int cantidad_estudios_terciarios_completos_femeninos = 0;
    int cantidad_personas_encuestadas_femeninos = 0;
    int porcentaje_estudios_terciarios_completos_femeninos = 0;
    while (true)
    {
        string domicilio = "";
        char vivienda = ' ';
        int cantidad_integrantes = 0;
        int edadTotalFamilia = 0;
        int promedioEdadFamilia = 0;
        cout << "Ingrese el domicilio de la vivienda: " << endl;
        cin >> domicilio;
        cout << "Ingrese el tipo de vivienda (C: casa, D: departamento): " << endl;
        cin >> vivienda;
        cout << "Ingrese la cantidad de integrantes de la familia: " << endl;
        cin >> cantidad_integrantes;
        if (cantidad_integrantes == 0)
        {
            break;
        }
        for (int i = 1; i <= cantidad_integrantes; i++)
        {
            string nombre_completo;
            int edad;
            char sexo;
            char nivel_estudios;
            int nivel_estudios_numerico;
            bool nivel_estudios_completo;
            cout << "Ingrese el nombre completo de la persona " << i << endl;
            cin >> nombre_completo;
            cout << "Ingrese la edad de la persona " << i << endl;
            cin >> edad;
            cout << "Ingrese el sexo de la persona (M o F) " << i << endl;
            cin >> sexo;
            if (sexo == 'F'){
                cantidad_personas_encuestadas_femeninos++;
            }
            cout << "Ingrese el nivel de estudios de la persona " << i << endl;
            cin >> nivel_estudios;
            if (nivel_estudios == 'N')
            {
                nivel_estudios_numerico = 0;
            }
            else if (nivel_estudios == 'P')
            {
                nivel_estudios_numerico = 1;
            }
            else if (nivel_estudios == 'S')
            {
                nivel_estudios_numerico = 2;
            }
            else if (nivel_estudios == 'T')
            {
                nivel_estudios_numerico = 3;
            }
            if (nivel_estudios_numerico == 0)
            {
                nivel_estudios_completo = false;
            }
            else
            {
                char tmp_nivel_estudios;
                cout << "Ingrese si la persona " << i << " esta completa o no (I: Incompleto, C: Completo): " << endl;
                cin >> tmp_nivel_estudios;
                if (tmp_nivel_estudios == 'C')
                {
                    nivel_estudios_completo = true;
                }
                else
                {
                    nivel_estudios_completo = false;
                }
            }

            if (nivel_estudios_numerico > 1 || (nivel_estudios_numerico == 1 && nivel_estudios_completo))
            {
                estudios_primarios_completos++;
            }

            if (edad > 10 && nivel_estudios_numerico == 0)
            {
                analfabetos++;
            }

            if (cantidad_integrantes > mayor_cantidad_integrantes)
            {
                mayor_cantidad_integrantes = cantidad_integrantes;
                domicilio_mayor_cantidad_integrantes = domicilio;
            }

            suma_edades += edad;
            edadTotalFamilia += edad;

            if (nivel_estudios_numerico > 3 || (nivel_estudios_numerico == 2 && !nivel_estudios_completo))
            {
                cantidad_estudios_secundarios_incompletos++;
            }

            if (nivel_estudios_numerico == 3 && sexo == 'F')
            {
                cantidad_estudios_terciarios_completos_femeninos++;
            }
        }
        cantidad_personas_encuestadas += cantidad_integrantes;
        cantidad_viviendas_encuestadas++;
        promedioEdadFamilia = edadTotalFamilia / cantidad_integrantes;
        if (promedioEdadFamilia > mayor_promedio_edades)
        {
            mayor_promedio_edades = promedioEdadFamilia;
        }
    }
    porcentaje_analfabetos = analfabetos * 100 / cantidad_personas_encuestadas;
    porcentaje_estudios_terciarios_completos_femeninos = (cantidad_estudios_terciarios_completos_femeninos * 100) / cantidad_personas_encuestadas;
    promedio_edades = suma_edades / cantidad_personas_encuestadas;
    cout << "La cantidad de personas encuestadas es: " << cantidad_personas_encuestadas << endl;
    cout << "La cantidad de viviendas encuestadas es: " << cantidad_viviendas_encuestadas << endl;

    cout << "La cantidad de encuestados que completaron sus estudios primarios es " << estudios_primarios_completos << endl;
    cout << "El porcentaje de analfabetos es: " << porcentaje_analfabetos << endl;
    cout << "La cantidad de integrantes de la familia con mayor cantidad de integrantes es: " << mayor_cantidad_integrantes << " y viven en " << domicilio_mayor_cantidad_integrantes << endl;
    cout << "El promedio de edades de la ciudad es: " << promedio_edades << endl;
    cout << "La mayor edad promedio de las familias es " << mayor_promedio_edades << endl;
    cout << "La cantidad de personas que no completaron sus estudios secundarios es: " << cantidad_estudios_secundarios_incompletos << endl;
    cout << "El porcentaje de encuestados de sexo femenino con estudios tercearios completos es " << porcentaje_estudios_terciarios_completos_femeninos << endl;
    return 0;
}