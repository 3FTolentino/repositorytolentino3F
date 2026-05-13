#include <iostream>
#include <cstring>
#include "GestoreContatti.h"

using namespace std;

GestoreContatti::GestoreContatti() {
    quanti = 0;
}

void GestoreContatti::aggiungiContatto(char n[], char c[], char t[]) {

    if (quanti == 10) {
        cout << "Rubrica piena" << endl;
        return;
    }

    int i;

    // sposta gli elementi a destra
    for (i = quanti - 1; i >= 0; i--) {

        if (strcmp(rubrica[i].getCognome(), c) > 0) {

            rubrica[i + 1] = rubrica[i];

        } else {

            break;
        }
    }

    // inserisce il nuovo contatto
    rubrica[i + 1].setContatto(n, c, t);

    quanti++;
}

void GestoreContatti::stampaTutti() {

    for (int i = 0; i < quanti; i++) {

        rubrica[i].stampa();
    }
}

void GestoreContatti::cercaContatto(char cognome[]) {

    int inizio = 0;
    int fine = quanti - 1;

    while (inizio <= fine) {

        int centro = (inizio + fine) / 2;

        int risultato =
            strcmp(rubrica[centro].getCognome(), cognome);

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