#define _CRT_SECURE_NO_WARNINGS
#include "StudentData.h"
#include <cstring> 

void StudentData::Init() {
    this->nume[0] = '\0';
    this->notaMatematica = 0;
    this->notaEngleza = 0;
    this->notaIstorie = 0;
}

void StudentData::seteazaNume(const char* numeStudent) {
    strncpy(this->nume, numeStudent, sizeof(this->nume) - 1);
    this->nume[sizeof(this->nume) - 1] = '\0';
}

void StudentData::seteazaNotaMatematica(float nota) {
    if (nota >= 1.0 && nota <= 10.0) {
        this->notaMatematica = nota;
    }
}

void StudentData::seteazaNotaEngleza(float nota) {
    if (nota >= 1.0 && nota <= 10.0) {
        this->notaEngleza = nota;
    }
}

void StudentData::seteazaNotaIstorie(float nota) {
    if (nota >= 1.0 && nota <= 10.0) {
        this->notaIstorie = nota;
    }
}

const char* StudentData::obtineNume() {
    return this->nume;
}

float StudentData::obtineNotaMatematica() {
    return this->notaMatematica;
}

float StudentData::obtineNotaEngleza() {
    return this->notaEngleza;
}

float StudentData::obtineNotaIstorie() {
    return this->notaIstorie;
}

float StudentData::obtineMedie() {
    return (this->notaMatematica + this->notaEngleza + this->notaIstorie) / 3.0;
}

