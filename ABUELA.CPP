#include <iostream>

using namespace std;

int main() {
    double fahrenheit, celsius;

    // Solicitar al usuario la temperatura en grados Fahrenheit
    cout << "Ingresa la temperatura en grados Fahrenheit: ";
    cin >> fahrenheit;

    // Convertir Fahrenheit a Celsius
    celsius = (fahrenheit - 32) * 5/9;

    // Mostrar el resultado
    cout << fahrenheit << " grados Fahrenheit equivalen a " << celsius << " grados Celsius." << endl;

    return 0;
