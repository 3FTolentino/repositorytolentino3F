#ifndef GESTORECONTATTIABC_H
#define GESTORECONTATTIABC_H

class GestoreContattiABC {

public:

    virtual void aggiungiContatto(char n[],
                                  char c[],
                                  char t[]) = 0;

    virtual void stampaTutti() = 0;

    virtual void cercaContatto(char cognome[]) = 0;
};

#endif