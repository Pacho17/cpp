#include "serieCollatz.hpp"
#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "Ingrese el valor de la serie ";
    cin >> x;
    cout << endl;
    int calculos = serieCollatz(x);
    cout << "El numero del calculo fue: " << calculos << endl;
    return 0;
}