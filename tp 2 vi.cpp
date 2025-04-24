#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un valor entero: ";
    cin >> N;

    if (N % 2 == 0) {
        cout << "El número es par" << endl;
    } else {
        cout << "El número es impar" << endl;
    }

    return 0;
}
