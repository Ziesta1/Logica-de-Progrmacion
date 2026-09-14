#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero de 5 digitos: ";
    cin >> numero;

    int digitoCentral = (numero / 100) % 10;
    cout << "El digito central es: " << digitoCentral << '\n';
    return 0;
}
