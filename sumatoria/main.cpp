#include "sumatoria.hpp"
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese el valor a realizar sumatoria:" << endl;
    cin >> n;
    int suma = sumatoria(n);
    cout << "El valor de la sumatoria es: " << suma << endl;
    return 0;
}