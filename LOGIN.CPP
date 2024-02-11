#include <iostream>
#include <string>

using namespace std;

int main() {
    int username, password;
    int inputUsername, inputPassword;

    // Solicitar al usuario que ingrese su nombre de usuario y contraseña
    cout << "Ingrese su nombre de usuario: ";
    cin >> inputUsername;

    cout << "Ingrese su contraseña: ";
    cin >> inputPassword;

    // Verificar las credenciales ingresadas
    if (inputUsername == username && inputPassword == password) {
        cout << "Inicio de sesión exitoso. Bienvenido, " << username << "!" << endl;
    } else {
        cout << "Nombre de usuario o contraseña incorrectos. Por favor, inténtelo de nuevo." << endl;
    }

    return 0;
}
