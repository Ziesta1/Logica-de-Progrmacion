#include <iostream>
using namespace std;

int main() {
    int totalDias;
    cout << "Ingrese la cantidad total de dias: ";
    cin >> totalDias;

    int anios = totalDias / 365;
    int sobrante = totalDias % 365;
    int meses = sobrante / 30;
    int dias = sobrante % 30;

    cout << "Anios: " << anios << '\n';
    cout << "Meses: " << meses << '\n';
    cout << "Dias: " << dias << '\n';
    return 0;
}
