#include "funciones.h"

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void participantes() {
    std::cout << std::endl << "=== Prueba 2 ===" << std::endl;
    std::cout << std::endl << "Andres Munoz" << std::endl;
    std::cout << std::endl << "Esteban Rojas" << std::endl; 
    std::cout << std::endl << "Ignacio Valdebenito" << std::endl;  
}


vector<int> obtenerPuntajes(std::string fila) {
    vector<int> arreglo;
    std::stringstream ss(fila);
    std::string item;

    // 17424518;639;654;500;583;714;724 -> ss

    while (std::getline(ss, item, ';')) {
        int valor = atoi(item.c_str());
        arreglo.push_back(valor);
    }
    return arreglo;
}

double promediarAP(std::vector<int> puntajes) {
    double promedio = 0.0;
    if (puntajes.size() >= 6) {
        // int rut = puntajes.at(0);
        int nem = puntajes.at(1);
        int ranking = puntajes.at(2);
        int matematica = puntajes.at(3);
        int lenguaje = puntajes.at(4);
        int ciencias = puntajes.at(5);
        int historia = puntajes.at(6);

        promedio = (nem*0.15 + ranking*0.2 + matematica*0.3 + lenguaje*0.25 + ciencias*0.5 + historia*0.5);
    }
    return promedio;
}