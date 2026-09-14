#include <iostream>
using namespace std;

int main() {
    int fecha;
    cout << "Ingrese la fecha en formato AAAAMMDD: ";
    cin >> fecha;

    int anio = fecha / 10000;
    int mes = (fecha / 100) % 100;
    int dia = fecha % 100;

    cout << "Anio: " << anio << '\n';
    cout << "Mes: " << mes << '\n';
    cout << "Dia: " << dia << '\n';
    return 0;
}
