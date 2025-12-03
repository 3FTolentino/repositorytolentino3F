#include <iostream>
using namespace std;

int main (){
    const float tar=0.02, pesoMax=20;
    float prezzoBiglietto, pesoBagaglio, prezzoBfinale, pesoDiff, prezzoBagg;
    cout << "Inserisci il prezzo del biglietto (in euro): ";
    cin >> prezzoBiglietto;
    cout << "Inserisci il peso del bagaglio (in kg): ";
    cin >> pesoBagaglio;
    prezzoBfinale = prezzoBiglietto;
    

    if (pesoBagaglio>pesoMax){
       pesoDiff= pesoBagaglio-pesoMax;
       prezzoBagg = (prezzoBiglietto*tar)*pesoDiff;
       prezzoBfinale= prezzoBiglietto+prezzoBagg;      
    }
    cout << "Dovrai pagare: "<< prezzoBfinale << " euro" ;

    return 0;
}
