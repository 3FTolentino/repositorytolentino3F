#ifndef CONTATTO_H
#define CONTATTO_H

class Contatto {

private:
    char nome[30];
    char cognome[30];
    char telefono[20];

public:
    void setContatto(char n[], char c[], char t[]);
    void stampa();
    char* getCognome();
};

#endif
