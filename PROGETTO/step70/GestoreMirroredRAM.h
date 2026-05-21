#ifndef GESTOREMIRROREDRAM_H
#define GESTOREMIRROREDRAM_H
#include "GestoreRAMOrdinata.h"

class GestoreMirroredRAM: public GestoreRAMOrdinata {
private: 
        char nomeFile [50];
        char caricaDaFile();
        char salvaSuFile();

public:
        GestoreMirroredRAM(const char *f);  
        ~GestoreMirroredRAM();
        void aggiungiContatto (char n[], char c[], char t[]);

};

#endif