#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un valor entero: ";
    cin >> N;

    if (N % 2 == 0) {
        cout << "El n�mero es par" << endl;
    } else {
        cout << "El n�mero es impar" << endl;
    }

    return 0;
}
