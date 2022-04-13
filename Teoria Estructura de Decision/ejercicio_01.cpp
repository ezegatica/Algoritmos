#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    if (num1 < num2) {
        cout << "El numero menor es " << num1 << endl;
    } else {
        cout << "El numero menor es " << num2 << endl;
    }

    return 0;
}