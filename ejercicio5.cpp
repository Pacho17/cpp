//Serie de Collatz
//Escribe una función que implemente la conjetura de Collatz para un número dado. Haz que el programa determine la
// longitud de la secuencia para un rango de números y muestre cuál genera la secuencia más larga.


#include <iostream>
using namespace std;

int collatz(int n) {
    int pasos = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        pasos++;
    }
    return pasos;
}

int main() {
    int inicio, fin;
    cout << "Ingresa el rango de números (inicio y fin): ";
    cin >> inicio >> fin;

    int maxPasos = 0;
    int numConMaxPasos;

    for (int i = inicio; i <= fin; i++) {
        int pasos = collatz(i);
        if (pasos > maxPasos) {
            maxPasos = pasos;
            numConMaxPasos = i;
        }
    }

    cout << "El número que genera la secuencia de Collatz más larga es " << numConMaxPasos << " con " << maxPasos << " pasos." << endl;

    return 0;
}
