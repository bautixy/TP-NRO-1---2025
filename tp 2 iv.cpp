#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Ingrese tres valores enteros: ";
    cin >> A >> B >> C;

    if (A == B || A == C || B == C) {
        cout << "Los valores deben ser distintos" << endl;
    } else {
        int mayor = max(A, max(B, C));
        int menor = min(A, min(B, C));
        cout << "Mayor: " << mayor << ", Menor: " << menor << endl;
    }

    return 0;
}
