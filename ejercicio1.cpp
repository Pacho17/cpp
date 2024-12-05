//Sumatoria Recursiva
//Escribe una función recursiva que calcule la sumatoria de los números del 1 hasta un número n ingresado por el usuario.


#include <iostream>
using namespace std;

int sumatoria(int n) {
    if (n == 0) return 0;
    return n + sumatoria(n - 1);
}

int main() {
    int n;
    cout << "Ingresa un número: ";
    cin >> n;
    cout << "La sumatoria de 1 a " << n << " es: " << sumatoria(n) << endl;
    return 0;
}
