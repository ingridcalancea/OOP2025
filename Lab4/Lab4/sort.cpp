#include "sort.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdarg>
#include <sstream>

using namespace std;

sort::sort(int numElements, int min, int max) {
    size = numElements;
    elements.resize(size);  // Folosește resize() pentru a ajusta dimensiunea vectorului
    srand(time(0));
    for (int i = 0; i < size; i++) {
        elements[i] = min + rand() % (max - min + 1);
    }
}

// listă fixă
sort::sort(int* arr, int count) {
    size = count;
    elements.resize(size);  // Ajustează dimensiunea vectorului
    for (int i = 0; i < size; i++) {
        elements[i] = arr[i];
    }
}

// parametri variadici
sort::sort(int count, ...) {
    size = count;
    elements.resize(size);  // Ajustează dimensiunea vectorului
    va_list args;
    va_start(args, count);
    for (int i = 0; i < size; i++) {
        elements[i] = va_arg(args, int);
    }
    va_end(args);
}

// șir de caractere
sort::sort(const char* numbers) {
    size = 1;
    for (const char* p = numbers; *p; p++) {
        if (*p == ',') size++;
    }
    elements.resize(size);  // Ajustează dimensiunea vectorului
    int index = 0, num = 0;
    for (const char* p = numbers; *p; p++) {
        if (*p == ',') {
            elements[index++] = num;
            num = 0;
        }
        else {
            num = num * 10 + (*p - '0');
        }
    }
    elements[index] = num;
}

void sort::Print() {
    if (elements.empty()) {
        std::cout << "List is empty!" << std::endl;
    }
    else {
        for (size_t i = 0; i < elements.size(); i++) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }
}


int sort::GetElementsCount() {
    return elements.size();
}

// un element de pe o poziție anume
int sort::GetElementFromIndex(int index) {
    if (index >= 0 && index < elements.size())
        return elements[index];
    return -1; 
}

    // sortare prin Insertion sort
    void sort::InsertSort(bool ascendent) {
        int n = elements.size();
        for (int i = 1; i < n; i++) {
            int key = elements[i];
            int j = i - 1;

            // Mutăm elementele mai mari (sau mai mici) în funcție de direcția sortării
            if (ascendent) {
                while (j >= 0 && elements[j] > key) {
                    elements[j + 1] = elements[j];
                    j--;
                }
            }
            else {
                while (j >= 0 && elements[j] < key) {
                    elements[j + 1] = elements[j];
                    j--;
                }
            }

            elements[j + 1] = key;
        }
    }

    // sortare prin Bubble sort
    void sort::BubbleSort(bool ascendent) {
        int n = elements.size();
        bool swapped;
        do {
            swapped = false;
            for (int i = 1; i < n; i++) {
                if (ascendent) {
                    if (elements[i - 1] > elements[i]) {
                        swap(elements[i - 1], elements[i]);
                        swapped = true;
                    }
                }
                else {
                    if (elements[i - 1] < elements[i]) {
                        swap(elements[i - 1], elements[i]);
                        swapped = true;
                    }
                }
            }
            n--;
        } while (swapped);
    }

    // sortare prin Quicksort
    void sort::QuickSortt(int low, int high, bool ascendent) {
        if (low < high) {
            int pivot = elements[high];
            int i = low - 1;

            for (int j = low; j < high; j++) {
                if (ascendent) {
                    if (elements[j] < pivot) {
                        i++;
                        swap(elements[i], elements[j]);
                    }
                }
                else {
                    if (elements[j] > pivot) {
                        i++;
                        swap(elements[i], elements[j]);
                    }
                }
            }
            swap(elements[i + 1], elements[high]);
            int pi = i + 1;

            QuickSortt(low, pi - 1, ascendent);
            QuickSortt(pi + 1, high, ascendent);
        }
    }

    void sort::QuickSort(bool ascendent) {
        QuickSortt(0, elements.size() - 1, ascendent);
    }

   
