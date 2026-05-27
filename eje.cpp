#include <iostream>
using namespace std;

int main() {
    int opcion;
    double nota, sumaNotas = 0, promedio;
    int cantidad = 0;
    int aprobados = 0, reprobados = 0;

    while(opcion != 3) {

        cout << "MENU DE NOTAS" << endl;
        cout << "1. Registrar nota" << endl;
        cout << "2. Ver resumen" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                cout << "Ingrese la nota: ";
                cin >> nota;

                if(nota < 0 && nota > 10) {
                    cout << "Nota invalida" << endl;
                } else{
                    sumaNotas = nota;
                    cantidad++;

                    if(nota >= 6) // tenia una coma en el if que no hacia correr el progrma
                    {
                        aprobados++;
                    }
                    else {
                        reprobados++;
                    }
                }

            case 2:
                promedio = sumaNotas / cantidad;

                cout << "Cantidad de notas: " << cantidad << endl;
                cout << "Promedio: " << promedio << endl;
                cout << "Aprobados: " << aprobados << endl;
                cout << "Reprobados: " << reprobados << endl;
                break;

            case 3:
                cout << "Saliendo del programa..." << endl;

            default:
                cout << "Opcion invalida" << endl;
        }
    }

    return 0;
}
