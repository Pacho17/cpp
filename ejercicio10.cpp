//Carrera de buses

#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

struct Autobus {
    string nombre;
    double velocidad; // velocidad en km/h
    double distanciaRecorrida; // distancia recorrida en km
};

void mostrarProgreso(const vector<Autobus>& autobuses, double distanciaTotal) {
    for (const auto& bus : autobuses) {
        int porcentaje = (bus.distanciaRecorrida / distanciaTotal) * 100;
        cout << bus.nombre << ": ";
        for (int i = 0; i < porcentaje / 2; ++i) {
            cout << "=";
        }
        cout << ">" << endl;
    }
    cout << endl;
}

int main() {
    int numAutobuses;
    double distanciaTotal;

    // Solicitar la distancia de la carrera
    cout << "Ingresa la distancia de la carrera en kilómetros: ";
    cin >> distanciaTotal;

    // Solicitar el número de autobuses
    cout << "Ingresa el número de autobuses: ";
    cin >> numAutobuses;

    vector<Autobus> autobuses(numAutobuses);

    // Solicitar datos de cada autobús
    for (int i = 0; i < numAutobuses; i++) {
        cout << "Ingresa el nombre del autobús " << i + 1 << ": ";
        cin >> autobuses[i].nombre;
        cout << "Ingresa la velocidad del autobús " << i + 1 << " en km/h: ";
        cin >> autobuses[i].velocidad;
        autobuses[i].distanciaRecorrida = 0.0;
    }

    bool carreraEnCurso = true;
    while (carreraEnCurso) {
        carreraEnCurso = false;
        for (auto& bus : autobuses) {
            bus.distanciaRecorrida += bus.velocidad / 60.0; // Avanza un minuto de carrera
            if (bus.distanciaRecorrida < distanciaTotal) {
                carreraEnCurso = true;
            }
        }
        system("clear"); // Limpiar la consola (puede necesitar ajuste en diferentes SO)
        mostrarProgreso(autobuses, distanciaTotal);
        this_thread::sleep_for(chrono::seconds(1)); // Esperar un segundo
    }

    // Determinar el ganador
    Autobus ganador = autobuses[0];
    for (const auto& bus : autobuses) {
        if (bus.distanciaRecorrida >= distanciaTotal && bus.distanciaRecorrida < ganador.distanciaRecorrida) {
            ganador = bus;
        }
    }

    // Mostrar el ganador
    cout << "El autobús ganador es: " << ganador.nombre << " con una distancia de " << ganador.distanciaRecorrida << " km." << endl;

    return 0;
}
