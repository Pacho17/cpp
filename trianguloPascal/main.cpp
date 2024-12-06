#include "trianguloPascal.hpp"
#include <iostream>
using namespace std;

int main(){
    int alt;
    cout << " Si quiere, Ingrese la altura del triangulo: ";
    cin >> alt;
    cout << endl;
    trianguloPascal(alt);
    return 0;
}