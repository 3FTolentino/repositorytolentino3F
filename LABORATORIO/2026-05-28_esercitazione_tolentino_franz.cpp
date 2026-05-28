#include <iostream>
using namespace std;

struct Studente {
char nome[30];
char cognome[30];
float voto;
};

void CalcoloMedia (Studente classe [] , int stud) {
    float somma = 0;
    float media;
    for (int i = 0 ; i < stud ; i++){
        somma = somma + classe[i].voto;
    }
    media = somma / stud;
    cout << "LA MEDIA DEGLI STUDENTI E': " << media << endl;

}


int main () {
    int stud;
    Studente classe [10];

   
    do {
        cout << "Quanti studenti vuoi inserire? (massimo 10):  " << endl;
        cin >> stud;

    } while (stud < 1 || stud > 10);

    for (int i = 0 ; i < stud ; i++) {
        cout << "Inserisci il nome dello studente: ";
        cin >> classe[i].nome;
        cout << "Inserisci il cognome dello studente: ";
        cin >> classe[i].cognome;
        cout << "Inserisci il voto dello studente: ";
        cin >> classe[i].voto;
    }


    cout << "ELENCO COMPLETO DEGLI STUDENTI\n";
    for (int i = 0 ; i < stud ; i++) {
        cout << classe[i].nome << " " << classe[i].cognome << " e il suo voto e': " << classe[i].voto << endl;
        cout << " " << endl;
    }

   

    CalcoloMedia (classe, stud);



    int sufficienti = 0;
    for (int i = 0 ; i < stud ; i++) {
        if (classe[i].voto >= 6.0) {     
            sufficienti++;
        }
    }
    cout << "IL NUMERO DI STUDENTI CON IL VOTO SUFFICIENTE E': " << sufficienti << endl;



 return 0;
}
