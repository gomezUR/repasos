#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    char jugador, maquina;

    cout << "Elije piedra, papel o tijera: ";
    cin >> jugador;

    // OPCION DE LA MAQUINA
    maquina = "Piedra, papel o tijera"[rand() % 3]; 

    // SALIDA
    if (jugador == maquina)
        cout << "empate" << endl;
    else if ((jugador == 'piedra' && maquina == 'tijera') || (jugador == 'papel' && maquina == 'piedra') || (jugador == 'tijera' && maquina == 'papel'))
        cout << "ganaste" << endl;
    else
        cout << "perdiste" << endl;

    return 0;
}
