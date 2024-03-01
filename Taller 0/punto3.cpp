#include <iostream>
using namespace std;

int main() {
    
    double sueldo;
    
    cout << "Ingrese el sueldo del trabajador: ";
    cin >> sueldo;

    
    if (sueldo < 1000000) {

        double aumento_sueldo = sueldo * 0.15;

        double nuevo_sueldo = sueldo + aumento;

        cout << "Elsueldo total es : " << nuevo_sueldo << endl;

    } else {

        cout << "no hay aumento" << endl;
    }

    return 0;
}
