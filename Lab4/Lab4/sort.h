#pragma once
#include <vector>
#include <initializer_list>
#include <string>

class sort {
    
    std::vector<int> elements;
    int size;

public:
   
    // constructori
    sort(int numElements, int min, int max);
    sort(int* arr, int count);
    sort(int count, ...);
    sort(const char* numbers);

    void InsertSort(bool ascendent = false);
    void QuickSortt(int low, int high, bool ascendent);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);

    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};


