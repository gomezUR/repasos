#include <iostream>
using namespace std;

int main() {
    // VARIABLES 
    int total_afectadas;

    // ENTRADAS DEL USUARIO
    cout << "Ingrese el número de especies afectadas: ";
    cin >> total_afectadas;

    // PROCESO Y SALIDA
    cout << "Especies afectadas:" << endl;
    for (int i = 1; i <= total_afectadas; ++i) {
        cout << "Especie " << i << endl;
    }

    return 0;
}
