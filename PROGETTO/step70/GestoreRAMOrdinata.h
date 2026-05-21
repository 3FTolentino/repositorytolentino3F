#ifndef GESTORERAMORDINATA_H
#define GESTORERAMORDINATA_H

#include "GestoreContattiABC.h"
#include "Contatto.h"

class GestoreRAMOrdinata : public GestoreContattiABC {

protected:

    Contatto rubrica[10];
    int quanti;

public:

    GestoreRAMOrdinata();

    void aggiungiContatto(char n[], char c [], char t[]);

    void stampaTutti();
    
    void cercaContatto(char cognome[]);
};

#endif