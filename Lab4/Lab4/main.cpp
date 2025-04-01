#include <iostream>
#include "Sort.h"

int main() {
    // 1. Lista aleatorie
    sort listaAleatorie(10, 1, 100);  // 10 elemente aleatorii intre 1 si 100
    std::cout << "Lista originala (aleatorie): ";
    listaAleatorie.Print();
    listaAleatorie.InsertSort();
    std::cout << "Lista sortata (InsertSort): ";
    listaAleatorie.Print();

    std::cout << "\n";

    // 2. Lista dintr-un vector existent
    std::vector<int> vec = { 50, 20, 70, 10, 30 };
    sort listaVector(vec.data(), vec.size());
    std::cout << "Lista originala (vector): ";
    listaVector.Print();
    listaVector.QuickSort();
    std::cout << "Lista sortata (QuickSort): ";
    listaVector.Print();

    std::cout << "\n";

    // 3. Lista din parametri variadici
    sort listaVariadica(5, 100, 50, 150, 200, 75);
    std::cout << "Lista originala (variadica): ";
    listaVariadica.Print();
    listaVariadica.InsertSort();
    std::cout << "Lista sortata (InsertSort): ";
    listaVariadica.Print();

    std::cout << "\n";

    // 4. Lista dintr-un sir de caractere
    sort listaSir("10,40,100,5,70");
    std::cout << "Lista originala (din sir): ";
    listaSir.Print();
    listaSir.BubbleSort();
    std::cout << "Lista sortata (BubbleSort): ";
    listaSir.Print();

    return 0;
}
