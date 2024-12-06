#include "matrizEspejo.hpp"
#include <iostream>
using namespace std;
void matrizEspejo(){
    cout << "Ingrese la altura de la matriz: ";
    int altura;
    cin >> altura;
    cout << endl;
    int ancho;
    cout << "Ingrese el ancho de la matriz: ";
    cin >> ancho;
    cout << endl;

    int matriz[altura][ancho];
    int temp;
    int column = 1;
    for(int i = 0 ; i < altura ; i++){
        for(int j = ancho - 1 ; j >= 0 ; j--){
            cout << "Ingrese el valor de la fila [" << i+1 << "] columna [" << column << "]";
            cin >> temp;
            matriz[i][j] = temp;
            column++;
        }
    }

    for(int i = 0 ; i < altura ; i++){
        cout << "[";
        for(int j = 0 ; j < ancho ; j++){
            cout << " " << matriz[i][j] << " ";
        }
        cout << "]" << endl;
    }
}