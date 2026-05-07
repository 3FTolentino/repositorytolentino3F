#include <iostream>
#include <cstring>
#include "Contatto.h"

using namespace std;

int main() {

    Contatto rubrica[10];

    rubrica[0].setContatto((char*)"Luca", (char*)"Rossi", (char*)"111");
    rubrica[1].setContatto((char*)"Anna", (char*)"Bianchi", (char*)"222");
    rubrica[2].setContatto((char*)"Marco", (char*)"Verdi", (char*)"333");
    rubrica[3].setContatto((char*)"Giulia", (char*)"Neri", (char*)"444");
    rubrica[4].setContatto((char*)"Paolo", (char*)"Russo", (char*)"555");
    rubrica[5].setContatto((char*)"Sara", (char*)"Greco", (char*)"666");
    rubrica[6].setContatto((char*)"Davide", (char*)"Romano", (char*)"777");
    rubrica[7].setContatto((char*)"Elena", (char*)"Costa", (char*)"888");
    rubrica[8].setContatto((char*)"Chiara", (char*)"Fontana", (char*)"999");
    rubrica[9].setContatto((char*)"Matteo", (char*)"Villa", (char*)"000");

    char cercato[30];

    cout << "Inserisci cognome: ";
    cin >> cercato;

    bool trovato = false;

    for (int i = 0; i < 10; i++) {

        if (strcmp(rubrica[i].getCognome(), cercato) == 0) {
            rubrica[i].stampa();
            trovato = true;
        }
    }

    if (!trovato) {
        cout << "Contatto non trovato";
    }

    return 0;
}