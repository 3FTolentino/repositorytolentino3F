#include <iostream>
#include "Contatti.h"

using namespace std;

int main() {

    Contatto rubrica[100];

    int n;

    char cognome[30];

    inizializza(rubrica, n);

    cout << "Inserisci cognome: ";
    cin >> cognome;

    cerca(rubrica, n, cognome);

    return 0;
}