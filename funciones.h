/**
 * Función que muestra los participantes del grupo
 */
void participantes();

/**
 * 
 * @param fila una línea del archivo
 * @return vector con los puntajes. (0 -> rut)
 */
vector<int> obtenerPuntajes(std::string fila);

/**
 * 
 * @param puntajes Arreglo con los valores
 * @return el promedio del elemento 1 - 7 (Recordar que 0 -> rut)
 */
double promediarAP(std::vector<int> puntajes);
