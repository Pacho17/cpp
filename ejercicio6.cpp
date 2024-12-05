//Análisis de Frecuencia de Caracteres
//Crea un programa que permita ingresar una cadena de texto. 
//Escribe una función que cuente la frecuencia de cada carácter en la cadena y devuelva el carácter más repetido.

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char caracterMasFrecuente(const string &texto) {
    unordered_map<char, int> frecuencia;
    for (char c : texto) {
        frecuencia[c]++;
    }

    char masFrecuente = '\0';
    int maxFrecuencia = 0;
    for (auto &par : frecuencia) {
        if (par.second > maxFrecuencia) {
            maxFrecuencia = par.second;
            masFrecuente = par.first;
        }
    }
    return masFrecuente;
}

int main() {
    string texto;
    cout << "Ingresa una cadena de texto: ";
    getline(cin, texto);

    char resultado = caracterMasFrecuente(texto);
    cout << "El carácter más frecuente es: " << resultado << endl;

    return 0;
}
