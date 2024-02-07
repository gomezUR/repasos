#include <iostream>
using namespace std;

int main() {
    // DECLARACION DE VARIABLES 
    double pesoBebe, mesesBebe, dosisVacuna;

    // ENTRADAS AL USUARIO 
    cout << "Ingrese la edad del bebé: ";
    cin >> mesesBebe;
    cout << "Ingrese el peso del bebé: ";
    cin >> pesoBebe;

    // PROCESO 
    dosisVacuna = ((pesoBebe + 10) / (mesesBebe * 10)) * 8;

    // SALIDA 
    cout << "La dosis adecuada es " << dosisVacuna; 

    return 0;
}
