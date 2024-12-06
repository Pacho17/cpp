#include "cribaEratostenes.hpp"
#include <iostream>
using namespace std;
void cribaEratostenes(int x){
    bool primo;
    for(int i = 2; i <= x; i++){
        primo = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                primo = false;
            }
        }
        if(primo){
            cout << i  << " es primo" << endl;
        }
    }
}