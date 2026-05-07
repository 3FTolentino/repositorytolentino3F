#include <iostream>
#include <cstring>
#include "Contatti.h"

using namespace std;

void inizializza(Contatto rubrica[], int &n) {

    n = 10;

    strcpy(rubrica[0].nome, "Alessio");
    strcpy(rubrica[0].cognome, "Bianchi");
    strcpy(rubrica[0].telefono, "111");

    strcpy(rubrica[1].nome, "Giulia");
    strcpy(rubrica[1].cognome, "Rossi");
    strcpy(rubrica[1].telefono, "222");

    strcpy(rubrica[2].nome, "Luca");
    strcpy(rubrica[2].cognome, "Verdi");
    strcpy(rubrica[2].telefono, "333");

    strcpy(rubrica[3].nome, "Anna");
    strcpy(rubrica[3].cognome, "Neri");
    strcpy(rubrica[3].telefono, "444");

    strcpy(rubrica[4].nome, "Marco");
    strcpy(rubrica[4].cognome, "Russo");
    strcpy(rubrica[4].telefono, "555");

    strcpy(rubrica[5].nome, "Sara");
    strcpy(rubrica[5].cognome, "Greco");
    strcpy(rubrica[5].telefono, "666");

    strcpy(rubrica[6].nome, "Paolo");
    strcpy(rubrica[6].cognome, "Romano");
    strcpy(rubrica[6].telefono, "777");

    strcpy(rubrica[7].nome, "Elena");
    strcpy(rubrica[7].cognome, "Costa");
    strcpy(rubrica[7].telefono, "888");

    strcpy(rubrica[8].nome, "Davide");
    strcpy(rubrica[8].cognome, "Fontana");
    strcpy(rubrica[8].telefono, "999");

    strcpy(rubrica[9].nome, "Chiara");
    strcpy(rubrica[9].cognome, "Villa");
    strcpy(rubrica[9].telefono, "000");
}

void cerca(Contatto rubrica[], int n, char cognome[]) {

    bool trovato = false;

    for (int i = 0; i < n; i++) {

        if (strcmp(rubrica[i].cognome, cognome) == 0) {

            cout << endl;
            cout << "Contatto trovato:" << endl;

            cout << rubrica[i].nome << " ";
            cout << rubrica[i].cognome << " ";
            cout << rubrica[i].telefono << endl;

            trovato = true;
        }
    }

    if (trovato == false) {
        cout << "Contatto non trovato" << endl;
    }
}