#include "trianguloPascal.hpp"
#include <iostream>
using namespace std;
void trianguloPascal(int alt){
    for(int i = 1 ; i <= alt ; i++){
        for(int j = 1 ; j <= alt - i ; j++ ){
            cout << " ";
        }
        for(int k = 1 ; k <= (i * 2) - 1 ; k++){
            cout << "*";
        }
        cout << endl;
    }
}