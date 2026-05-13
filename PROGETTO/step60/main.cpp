#include <iostream>
#include "GestoreRAMOrdinata.h"

using namespace std;

int main() {

    GestoreRAMOrdinata g;

    g.aggiungiContatto((char*)"Luca", (char*)"Rossi", (char*)"111");
    g.aggiungiContatto((char*)"Anna", (char*)"Bianchi", (char*)"222");
    g.aggiungiContatto((char*)"Marco", (char*)"Verdi", (char*)"333");
    g.aggiungiContatto((char*)"Giulia", (char*)"Neri", (char*)"444");
    g.aggiungiContatto((char*)"Paolo", (char*)"Russo", (char*)"555");
    g.aggiungiContatto((char*)"Sara", (char*)"Greco", (char*)"666");
    g.aggiungiContatto((char*)"Davide", (char*)"Romano", (char*)"777");
    g.aggiungiContatto((char*)"Elena", (char*)"Costa", (char*)"888");
    g.aggiungiContatto((char*)"Chiara", (char*)"Fontana", (char*)"999");
    g.aggiungiContatto((char*)"Matteo", (char*)"Villa", (char*)"000");

    cout << "Rubrica ordinata:" << endl;

    g.stampaTutti();

    char cercato[30];

    cout << endl;
    cout << "Inserisci cognome: ";

    cin >> cercato;

    g.cercaContatto(cercato);

    return 0;
}