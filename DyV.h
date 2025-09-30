#ifndef DYV_H
#define DYV_H

#include <vector>
#include <string>

int BusquedaBinaria(int x, const std::vector<int>& v, int ini, int fin) {
    if (ini > fin) {
        return -1;
    }

    int medio = (ini + fin) / 2;

    if (v[medio] == x) {
        return medio;
    } else if (v[medio] > x) {
        return BusquedaBinaria(x, v, ini, medio - 1);
    } else {
        return BusquedaBinaria(x, v, medio + 1, fin);
    }
}

int BusquedaBinaria_INV(int x, const std::vector<int>& v, int ini, int fin) {
    if (ini > fin) {
        return -1;
    }

    int medio = (ini + fin) / 2;

    if (v[medio] == x) {
        return medio;
    } else if (v[medio] < x) {
        return BusquedaBinaria_INV(x, v, ini, medio - 1);
    } else {
        return BusquedaBinaria_INV(x, v, medio + 1, fin);
    }
}

#endif

