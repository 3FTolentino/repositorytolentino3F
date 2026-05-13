#include <iostream>
#include <cstring>
#include "GestoreRAMOrdinata.h"

using namespace std;

GestoreRAMOrdinata::GestoreRAMOrdinata() {

    quanti = 0;
}

void GestoreRAMOrdinata::aggiungiContatto(char n[],
                                          char c[],
                                          char t[]) {

    if (quanti == 10) {

        cout << "Rubrica piena" << endl;
        return;
    }

    int i;

    for (i = quanti - 1; i >= 0; i--) {

        if (strcmp(rubrica[i].getCognome(), c) > 0) {

            rubrica[i + 1] = rubrica[i];

        } else {

            break;
        }
    }

    rubrica[i + 1].setContatto(n, c, t);

    quanti++;
}

void GestoreRAMOrdinata::stampaTutti() {

    for (int i = 0; i < quanti; i++) {

        rubrica[i].stampa();
    }
}

void GestoreRAMOrdinata::cercaContatto(char cognome[]) {

    int inizio = 0;
    int fine = quanti - 1;

    while (inizio <= fine) {

        int centro = (inizio + fine) / 2;

        int risultato =
            strcmp(rubrica[centro].getCognome(),
                   cognome);

        if (risultato == 0) {

            rubrica[centro].stampa();
            return;
        }

        if (risultato < 0) {

            inizio = centro + 1;

        } else {

            fine = centro - 1;
        }
    }

    cout << "Contatto non trovato" << endl;
}