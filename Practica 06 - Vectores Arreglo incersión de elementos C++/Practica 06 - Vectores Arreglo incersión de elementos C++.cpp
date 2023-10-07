#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declara un vector de cadenas
    vector<string> aves;

    // Agrega valores al vector utilizando push_back()
    aves.push_back("Loro gris");
    aves.push_back("Paloma de diamante");
    aves.push_back("Coctel");

    cout << "Los valores del vector antes de insertar:\n";

    // Itera sobre el vector para imprimir los valores
    for (int i = 0; i < aves.size(); ++i) {
        cout << aves[i] << endl;
    }

    // Agrega tres valores al final del vector utilizando push_back()
    aves.push_back("Periquitos");
    aves.push_back("Cacatua");
    aves.push_back("Mana");

    cout << "Los valores del vector despues de insertar:\n";

    // Itera sobre el vector para imprimir los valores
    for (int i = 0; i < aves.size(); ++i) {
        cout << aves[i] << endl;
    }

    return 0;
}