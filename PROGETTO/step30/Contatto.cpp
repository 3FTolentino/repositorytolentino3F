#include <iostream>
#include <cstring>
#include "Contatto.h"

using namespace std;

void Contatto::setContatto(char n[], char c[], char t[]) {
    strcpy(nome, n);
    strcpy(cognome, c);
    strcpy(telefono, t);
}

void Contatto::stampa() {
    cout << nome << " " << cognome << " " << telefono << endl;
}

char* Contatto::getCognome() {
    return cognome;
}