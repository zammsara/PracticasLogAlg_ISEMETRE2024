/*Para un grupo de clase de 8 estudiantes, realice un programa que permita calcular:
-Cantidad de alumnos aprobados
-Cantidad de alumnos reprobados
-Promedio general del grupo
(Nota minima para aprobar: 70)*/

#include <iostream>

using namespace std;
int main() {
    int estudiantes = 8;
    int estAprobados = 0, estReprobados = 0;
    double notaTodas = 0.0, promedio = 0.0;
    cout << "Hola, completa la infomacion" << endl;
    for (int i = 0; i < estudiantes; ++i) {
        double nota;
        cout << "Ingresa la nota del estudiante " << i + 1 << ": ";
        cin >> nota;
        notaTodas += nota;
        if (nota >= 70) {
            estAprobados++;
        } else {
            estReprobados++;
        }
    }
   promedio = notaTodas / estudiantes;
    cout << "Cantidad de estudiantes Aprobados: " << estAprobados << endl;
    cout << "Cantidad de estudiantes Reprobados: " << estReprobados << endl;
    cout << "Promedio general: " << promedio << endl;
    return 0;
}