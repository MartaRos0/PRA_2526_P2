#include <iostream>
#include <chrono>
#include "DyV.h"
using namespace std;

template <typename T>
void imprimir(T v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int vi[] = {9, 2, 5, 1, 8};
    int ni = sizeof(vi) / sizeof(vi[0]);

    auto t1 = chrono::system_clock::now();
    QuickSort(vi, 0, ni - 1);
    auto t2 = chrono::system_clock::now();

    cout << "Enteros ordenados: ";
    imprimir(vi, ni);
    chrono::duration<float, milli> tiempo_i = t2 - t1;
    cout << "Tiempo: " << tiempo_i.count() << " ms\n";

    float vf[] = {3.3, 1.1, 5.5, 2.2, 4.4};
    int nf = sizeof(vf) / sizeof(vf[0]);

    auto t3 = chrono::system_clock::now();
    QuickSort(vf, 0, nf - 1);
    auto t4 = chrono::system_clock::now();

    cout << "\nFloats ordenados: ";
    imprimir(vf, nf);
    chrono::duration<float, milli> tiempo_f = t4 - t3;
    cout << "Tiempo: " << tiempo_f.count() << " ms\n";

    char vc[] = {'z', 'm', 'a', 'x', 'f'};
    int nc = sizeof(vc) / sizeof(vc[0]);

    auto t5 = chrono::system_clock::now();
    QuickSort(vc, 0, nc - 1);
    auto t6 = chrono::system_clock::now();

    cout << "\nChars ordenados: ";
    imprimir(vc, nc);
    chrono::duration<float, milli> tiempo_c = t6 - t5;
    cout << "Tiempo: " << tiempo_c.count() << " ms\n";

    return 0;
}
