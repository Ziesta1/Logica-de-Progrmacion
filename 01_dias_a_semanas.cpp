#include <iostream>
using namespace std;

int main() {
    int dias;
    cout << "Ingrese la cantidad total de dias: ";
    cin >> dias;

    int semanas = dias / 7;
    int diasRestantes = dias % 7;

    cout << "Semanas completas: " << semanas << '\n';
    cout << "Dias restantes: " << diasRestantes << '\n';
    return 0;
}
