#ifndef CONTATTI_H
#define CONTATTI_H

struct Contatto {
    char nome[30];
    char cognome[30];
    char telefono[20];
};

void inizializza(Contatto rubrica[], int &n);
void cerca(Contatto rubrica[], int n, char cognome[]);

#endif