#define _CRT_SECURE_NO_WARNINGS
#include "Comparatii.h"
#include "StudentData.h"
#include <cstring> 


int comparaDupaNume( StudentData s1,  StudentData s2) {
    return strcmp(s1.obtineNume(), s2.obtineNume());
}

int comparaDupaNotaMatematica( StudentData s1,  StudentData s2) {
    
    if (s1.obtineNotaMatematica() > s2.obtineNotaMatematica())
        return 1;

    if (s1.obtineNotaMatematica() < s2.obtineNotaMatematica())
        return -1;

    return 0;
}

int comparaDupaNotaEngleza( StudentData s1,  StudentData s2) {
   
    if (s1.obtineNotaEngleza() > s2.obtineNotaEngleza())
        return 1;

    if (s1.obtineNotaEngleza() < s2.obtineNotaEngleza())
        return -1;

    return 0;
}

int comparaDupaNotaIstorie( StudentData s1,  StudentData s2) {
   
    if (s1.obtineNotaIstorie() > s2.obtineNotaIstorie())
        return 1;

    if (s1.obtineNotaIstorie() < s2.obtineNotaIstorie())
        return -1;

    return 0;
}

int comparaDupaMedie( StudentData s1,  StudentData s2) {
    
    float medie1 = s1.obtineMedie();
    float medie2 = s2.obtineMedie();

    if (medie1 > medie2)
        return 1;

    if (medie1 < medie2)
        return -1;

    return 0;
}
