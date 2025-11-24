#include <iostream>
using namespace std;

int main (){
    char nome [15];
    int eta;

    cout << "Inserisci il tuo nome: " ;
    cin >> nome;

    cout << "Inserisci la tua eta: " ;
    cin >> eta;
    if (eta >= 18) {
        cout << nome << " e' maggiorenne." << endl;
    }



    return 0;
}