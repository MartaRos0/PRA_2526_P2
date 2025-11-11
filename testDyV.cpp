#include <iostream>
#include "DyV.h"
using namespace std;

int main() {
    // Vector ascendente de enteros
    int vi[] = {1, 3, 5, 7, 9};
    int ni = sizeof(vi) / sizeof(vi[0]);
    int xi = 7;
    int posi = BusquedaBinaria(xi, vi, 0, ni - 1);
    cout << "Entero " << xi << " encontrado en posición: " << posi << endl;

    // Vector ascendente de floats
    float vfa[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int nfa = sizeof(vfa) / sizeof(vfa[0]);
    float xfa = 3.3;
    int posfa = BusquedaBinaria(xfa, vfa, 0, nfa - 1);
    cout << "Float " << xfa << " encontrado en posición: " << posfa << endl;

    // Vector ascendente de caracteres
    char vca[] = {'a', 'c', 'e', 'g', 'i'};
    int nca = sizeof(vca) / sizeof(vca[0]);
    char xca = 'g';
    int posca = BusquedaBinaria(xca, vca, 0, nca - 1);
    cout << "Char '" << xca << "' encontrado en posición: " << posca << endl;

    // Vector descendente de enteros
    int vd[] = {9, 7, 5, 3, 1};
    int nd = sizeof(vd) / sizeof(vd[0]);
    int xd = 5;
    int posd = BusquedaBinaria_INV(xd, vd, 0, nd - 1);
    cout << "Descendente: " << xd << " en posición " << posd << endl;

    // Vector descendente de floats
    float vfd[] = {5.5, 4.4, 3.3, 2.2, 1.1};
    int nfd = sizeof(vfd) / sizeof(vfd[0]);
    float xfd = 3.3;
    int posfd = BusquedaBinaria_INV(xfd, vfd, 0, nfd - 1);
    cout << "Float descendente: " << xfd << " en posición " << posfd << endl;

    // Vector descendente de caracteres
    char vcd[] = {'z', 'x', 'm', 'f', 'a'};
    int ncd = sizeof(vcd) / sizeof(vcd[0]);
    char xcd = 'm';
    int poscd = BusquedaBinaria_INV(xcd, vcd, 0, ncd - 1);
    cout << "Char descendente: '" << xcd << "' en posición " << poscd << endl;

    return 0;
}

