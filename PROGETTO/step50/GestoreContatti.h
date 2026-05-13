#ifndef GESTORECONTATTI_H
#define GESTORECONTATTI_H

#include "Contatto.h"

class GestoreContatti {
private:
    Contatto rubrica[10];
    int quanti;

public:
    GestoreContatti();

    void aggiungiContatto(char n[], char c[], char t[]);
    void stampaTutti();
    void cercaContatto(char cognome[]);
};

#endif