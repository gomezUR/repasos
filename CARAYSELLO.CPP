#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// LANZAMIENTO 
char lanzarMoneda() {
    return rand() % 2 == 0 ? 'Cara' : 'Sello'; 
}

int main() {
    srand(time(0)); 

    char opcion_del_jugador;

    cout << "Elige cara o sello: \n ";
    cin >> opcion_del_jugador;

    char resultado = lanzarMoneda();

    cout << "La moneda cayó en " << (resultado == 'Cara' ? "cara." : "sello.") << endl;

    if (eleccion == resultado) {
        cout << "ganaste" << endl;
    } else {
        cout << "perdiste" << endl;
    }

    return 0;
}
