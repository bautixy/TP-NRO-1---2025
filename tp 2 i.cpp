#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El n�mero es positivo" << endl;
    } else if (numero < 0) {
        cout << "El n�mero es negativo" << endl;
    } else {
        cout << "El n�mero es nulo" << endl;
    }

    return 0;
}
