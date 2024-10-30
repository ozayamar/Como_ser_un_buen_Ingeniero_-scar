#include <iostream>
#include <vector>
using namespace std;

// Función que calcula la cantidad de movimientos válidos para una cantidad de movimientos dada
int calcularMovimientosValidos(int movimientos) {
    // Mapa de los posibles movimientos del caballo desde cada número
    vector<vector<int>> MOVIMIENTOS_CABALLO = {
        {4, 6},    // Desde el 0
        {6, 8},    // Desde el 1
        {7, 9},    // Desde el 2
        {4, 8},    // Desde el 3
        {0, 3, 9}, // Desde el 4
        {},        // Desde el 5 (no hay movimientos)
        {0, 1, 7}, // Desde el 6
        {2, 6},    // Desde el 7
        {1, 3},    // Desde el 8
        {2, 4}     // Desde el 9
    };

    // Inicializamos la tabla de formas posibles
    vector<int> formas(10, 1);  // Hay una forma de estar en cada número inicialmente.

    // Iteramos por cada movimiento
    for (int move = 0; move < movimientos; ++move) {
        vector<int> nueva_forma(10, 0);  // Tabla para la nueva cantidad de formas

        // Recorremos cada número del teclado
        for (int numero = 0; numero < 10; ++numero) {
            // Para cada número, verificamos a qué números vecinos puede moverse
            for (int vecino : MOVIMIENTOS_CABALLO[numero]) {
                nueva_forma[vecino] += formas[numero];  // Sumamos las formas de llegar al vecino
            }
        }

        // Actualizamos la tabla de formas con los nuevos valores
        formas = nueva_forma;
    }

    // Sumamos todas las formas para obtener la cantidad total de movimientos válidos
    int total_movimientos_validos = 0;
    for (int forma : formas) {
        total_movimientos_validos += forma;
    }

    return total_movimientos_validos;
}

int main() {
    // Lista de movimientos a calcular
    vector<int> lista_movimientos = {1, 2, 3, 5, 8, 10, 15, 18, 21, 23, 32};

    cout << "Cantidad de movimientos\tPosibilidades válidas" << endl;

    // Iteramos por cada cantidad de movimientos en la lista
    for (int movimientos : lista_movimientos) {
        int resultado = calcularMovimientosValidos(movimientos);
        cout << movimientos << "\t\t\t" << resultado << endl;
    }

    return 0;
}
