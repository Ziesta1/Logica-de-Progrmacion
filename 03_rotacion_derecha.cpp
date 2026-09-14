#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero de 3 digitos: ";
    cin >> numero;

    int ultimoDigito = numero % 10;
    int primerosDosDigitos = numero / 10;
    int rotado = ultimoDigito * 100 + primerosDosDigitos;

    cout << "Numero rotado: " << rotado << '\n';
    return 0;
}
