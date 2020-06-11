#include "funciones.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main(int argc, char** argv) {

    if (argc > 1) {
        std::string archivo(argv[1]);
        
        std::ifstream lectura(archivo);
        //std::ofstream escritura("promedio.csv"); crea el archivo csv
        
        if (lectura) {
            for (std::string linea; getline(lectura,linea) ; ) {
                std::vector<int> puntajes = obtenerPuntajes(linea);
                int rut = puntajes.at(0);
                double promedio = promediarAP(puntajes);
                
                //codigo del profe donde agrega el rut y promedio al archivo
                /*
                std::string salida = std::to_string(rut) + ";" + std::to_string(promedio);
                escritura << salida << std::endl;
                puntajes.clear();*/
            }
        }
    }
    
    /**
     * Despliegue de participantes
     */
    participantes();
    return EXIT_SUCCESS;
}





