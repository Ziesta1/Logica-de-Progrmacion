#include <iostream>
using namespace std;

int main() {
    int totalMinutos;
    cout << "Ingrese la cantidad total de minutos: ";
    cin >> totalMinutos;

    int semanas = totalMinutos / (7 * 24 * 60);
    int sobrante = totalMinutos % (7 * 24 * 60);
    int dias = sobrante / (24 * 60);
    sobrante = sobrante % (24 * 60);
    int horas = sobrante / 60;
    int minutos = sobrante % 60;

    cout << "Semanas: " << semanas << '\n';
    cout << "Dias: " << dias << '\n';
    cout << "Horas: " << horas << '\n';
    cout << "Minutos restantes: " << minutos << '\n';
    return 0;
}
