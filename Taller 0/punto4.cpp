#include <iostream>
using namespace std;

int main() {
     double pesos_hora = 40000; 
     double pesos_horaextra = 5000;   
     int horas_normales = 35;    

    int horas_trabajadas;
    double salario_semanal = 0.0;

    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horas_trabajadas;

    if (horas_trabajadas <= pesos_hora {
        salario_semanal = horas_trabajadas * salario_por_hora_normal);

    }
     else {
        salario_semanal = horas_normales * pesos_hora;
        salario_semanal += (horas_trabajadas - horas_normales) * salario_por_hora_extra;
    }

    
    cout << "El salario semanal del empleado es: " << salario_semanal << " pesos" << endl;

    return 0;
}
