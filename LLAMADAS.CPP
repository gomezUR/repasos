#include <iostream>
#include <string>
using namespace std;

int main() {
    // VARIABLES 
    string tipo_llamada;

    // ENTRADAS DEL USUARIO 
    cout << "Ingrese el tipo de llamada: ";
    cin >> tipo_llamada;

    // PROCESO 
    if (tipo_llamada == "Fija") {
        cout << "Son 200 pesos por minuto de tu llamada" << endl;
    } else if (tipo_llamada == "Celular") {
        cout << "Son 300 pesos por minuto de tu llamada" << endl;
    } else if (tipo_llamada == "Internacional") {
        cout << "Son 500 pesos por minuto de tu llamada" << endl;
    }

    return 0;
}
