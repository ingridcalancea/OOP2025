#include <iostream>
#include "StudentData.h"
#include "Comparatii.h" 
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main() {
    StudentData s1, s2;

    s1.seteazaNume("Calancea Ingrid");
    s1.seteazaNotaMatematica(9);
    s1.seteazaNotaEngleza(10);
    s1.seteazaNotaIstorie(7);

    s2.seteazaNume("Popandau Ileana");
    s2.seteazaNotaMatematica(8);
    s2.seteazaNotaEngleza(9);
    s2.seteazaNotaIstorie(10);

    cout << "Student 1: " << s1.obtineNume() << " Medie: " << s1.obtineMedie() << endl;
    cout << "Student 2: " << s2.obtineNume() << " Medie: " << s2.obtineMedie() << endl;

    if (comparaDupaMedie(s1, s2) > 0) {
        cout << s1.obtineNume() << " are media mai mare"<<endl;
    }
    else {
        cout << s2.obtineNume() << " are media mai mare"<<endl;
    }

    if (comparaDupaNotaMatematica(s1, s2) > 0) {
        cout << s1.obtineNume() << " are nota la matematica mai mare" << endl;
    }
    else {
        cout << s2.obtineNume() << " are nota la matematica mai mare" << endl;
    }

    if (comparaDupaNotaEngleza(s1, s2) > 0) {
        cout << s1.obtineNume() << " are nota la engleza mai mare" << endl;
    }
    else {
        cout << s2.obtineNume() << " are nota la engleza mai mare" << endl;
    }

    if (comparaDupaNotaIstorie(s1, s2) > 0) {
        cout << s1.obtineNume() << " are nota la istorie mai mare" << endl;
    }
    else {
        cout << s2.obtineNume() << " are nota la istorie mai mare" << endl;
    }

    return 0;
}
