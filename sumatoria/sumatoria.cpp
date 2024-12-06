#include "sumatoria.hpp"
int sumatoria(int n){
    int suma = 0;
    for(int i = 0; i <= n; i++){
        suma += i;
    }
    return suma;
}