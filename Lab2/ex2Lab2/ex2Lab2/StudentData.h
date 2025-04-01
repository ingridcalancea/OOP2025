#pragma once
#include <stdio.h>

class StudentData {

    char nume[100];
    float notaMatematica;
    float notaEngleza;
    float notaIstorie;

public:

    void Init();
   
    void seteazaNume(const char* numeStudent);
    void seteazaNotaMatematica(float nota);
    void seteazaNotaEngleza(float nota);
    void seteazaNotaIstorie(float nota);

    const char* obtineNume();
    float obtineNotaMatematica();
    float obtineNotaEngleza();
    float obtineNotaIstorie();
    float obtineMedie();

};
