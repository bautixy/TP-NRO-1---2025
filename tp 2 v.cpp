#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3;
    cout << "Ingrese tres notas: ";
    cin >> nota1 >> nota2 >> nota3;

    float promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 7) {
        cout << "TEA" << endl;
    } else if (promedio >= 4 && promedio < 7) {
        cout << "TEP" << endl;
    } else {
        cout << "TED" << endl;
    }

    return 0;
}
