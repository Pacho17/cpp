//Matriz Espejo
//Crea un programa que permita al usuario ingresar una matriz NxN. Implementa una función que genere una matriz "espejo",
//reflejando los valores a lo largo de su eje vertical.


#include <iostream>
using namespace std;

void mostrarMatriz(int matriz[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void matrizEspejo(int matriz[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(matriz[i][j], matriz[i][n - j - 1]);
        }
    }
}

int main() {
    int n;
    cout << "Ingresa el tamaño de la matriz NxN: ";
    cin >> n;

    int matriz[10][10];
    cout << "Ingresa los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    mostrarMatriz(matriz, n);

    matrizEspejo(matriz, n);

    cout << "Matriz espejo:" << endl;
    mostrarMatriz(matriz, n);

    return 0;
}
