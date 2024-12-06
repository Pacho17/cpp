#include "serieCollatz.hpp"
#include <iostream>

int serieCollatz(int x){
    int valor = x;
    int calculos = 0;
    while(valor != 1){
        if(valor % 2 == 0){
            valor /= 2;
        }
        else{
            valor *= 3;
            valor += 1;
        }
        calculos++;
    }
    return calculos;
}