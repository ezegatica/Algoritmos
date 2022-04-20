#include <iostream>

using namespace std;
/*
11) Dados n y m enteros positivos, informar su producto obtenido por sumas sucesivas.
*/
int main() {
    int n, m;
    cout << "Ingrese n: " << endl;
    cin >> n;
    cout << "Ingrese m: " << endl;
    cin >> m;
    int producto = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            producto *= i * j;
        }
    }
    cout << "El producto de n por m es: " << producto << endl;  
    return 0;
}