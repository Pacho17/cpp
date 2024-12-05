//Criba de Eratóstenes
//Escribe una función que implemente la Criba de Eratóstenes para encontrar todos 
//los números primos menores a un número n dado por el usuario. Muestra los números primos encontrados.


#include <iostream>
#include <vector>
using namespace std;

void cribaEratostenes(int n) {
    vector<bool> primo(n + 1, true);
    primo[0] = primo[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (primo[p]) {
            for (int i = p * p; i <= n; i += p) {
                primo[i] = false;
            }
        }
    }

    cout << "Números primos menores a " << n << ":" << endl;
    for (int p = 2; p <= n; p++) {
        if (primo[p]) {
            cout << p << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingresa un número: ";
    cin >> n;
    cribaEratostenes(n);
    return 0;
}
