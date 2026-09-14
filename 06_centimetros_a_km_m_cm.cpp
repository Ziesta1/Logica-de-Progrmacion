#include <iostream>
using namespace std;

int main() {
    int centimetros;
    cout << "Ingrese la distancia en centimetros: ";
    cin >> centimetros;

    int kilometros = centimetros / 100000;
    int sobrante = centimetros % 100000;
    int metros = sobrante / 100;
    int cmRestantes = sobrante % 100;

    cout << "Kilometros: " << kilometros << '\n';
    cout << "Metros: " << metros << '\n';
    cout << "Centimetros restantes: " << cmRestantes << '\n';
    return 0;
}
