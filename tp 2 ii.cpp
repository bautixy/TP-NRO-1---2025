#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        int suma = num1 + num2;
        int diferencia = num1 - num2;
        cout << "Suma: " << suma << ", Diferencia: " << diferencia << endl;
    } else {
        int producto = num1 * num2;
        if (num2 != 0) {
            float division = static_cast<float>(num1) / num2;
            cout << "Producto: " << producto << ", Division: " << division << endl;
        } else {
            cout << "No se puede dividir por cero" << endl;
        }
    }

    return 0;
}
