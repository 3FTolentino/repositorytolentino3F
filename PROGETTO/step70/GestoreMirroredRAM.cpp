#include "GestoreMirroredRAM.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

GestoreMirroredRAM::GestoreMirroredRAM(const char* f) {
strcpy(nomeFile, f);
ifstream in(nomeFile);

if (in.is_open()) {
in.close();
caricaDaFile();
} else {
aggiungiContatto((char*)"Luca", (char*)"Rossi", (char*)"111");
aggiungiContatto((char*)"Anna", (char*)"Bianchi", (char*)"222");
aggiungiContatto((char*)"Marco", (char*)"Verdi", (char*)"333");
aggiungiContatto((char*)"Giulia", (char*)"Neri", (char*)"444");
aggiungiContatto((char*)"Paolo", (char*)"Russo", (char*)"555");
aggiungiContatto((char*)"Sara", (char*)"Greco", (char*)"666");
aggiungiContatto((char*)"Davide", (char*)"Romano", (char*)"777");
aggiungiContatto((char*)"Elena", (char*)"Costa", (char*)"888");
aggiungiContatto((char*)"Chiara", (char*)"Fontana", (char*)"999");
aggiungiContatto((char*)"Matteo", (char*)"Villa", (char*)"000");
salvaSuFile();
}
}

GestoreMirroredRAM::~GestoreMirroredRAM() {
salvaSuFile();
}

void GestoreMirroredRAM::caricaDaFile() {
ifstream f(nomeFile);
char n[30], c[30], t[20];
while (f >> n >> c >> t) {
GestoreRAMOrdinata::aggiungiContatto(n, c, t);
}
f.close();
}

void GestoreMirroredRAM::salvaSuFile() {
ofstream f(nomeFile);
for (int i = 0; i < quanti; i++) {
f << rubrica[i].getNome() << " "
<< rubrica[i].getCognome() << " "
<< rubrica[i].getTelefono() << endl;
}
f.close();
}

void GestoreMirroredRAM::aggiungiContatto(char n[], char c[], char t[]) {
GestoreRAMOrdinata::aggiungiContatto(n, c, t);
salvaSuFile();
}

