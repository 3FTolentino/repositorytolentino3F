#include <iostream>
#include "GestoreMirroredRAM.h"
using namespace std;

int main () {
    GestoreContattiABC* g= new GestoreMirroredRAM("rubrica.txt");

    g-> stampaTutti();

    char cognome [30];
    cout << "Cerca: ";
    cin >> cognome;
    g->cercaContatto(cognome);

    delete g;
    return 0;

}