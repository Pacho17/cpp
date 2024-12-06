#include "sumatoria.hpp"
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese un numero para realizar la sumatoria:" << endl;
    cin >> n;
    int suma = sumatoria(n);
    cout << "El valor de la suma es: " << suma << endl;
    return 0;
}