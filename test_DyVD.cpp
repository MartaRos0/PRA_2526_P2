#include "DyV.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v_desc{9, 7, 5, 3, 1}; // Vector descendente
    int valor = 5;

    int posicion = BusquedaBinaria_INV(valor, v_desc, 0, v_desc.size() - 1);

    if (posicion != -1)
        std::cout << "Valor " << valor << " en posicion: " << posicion << std::endl;
    else
        std::cout << "Valor " << valor << " no encontrado" << std::endl;

    return 0;
}

