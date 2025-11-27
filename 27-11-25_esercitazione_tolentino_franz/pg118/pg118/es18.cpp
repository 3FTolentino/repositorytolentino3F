#include <iostream>
using namespace std;

int main (){
 const float QuotaFissa= 100 , TarUnaSett= 600, TarDueSett= 1100, supplLenz= 20;
 int scelta;
 float CostoTot;
 cout << "Inserisci il tempo di soggiorno e leggerai opzioni aggiuntive per una lenzuola in piu', digita: 1 Per una settimana, 2 per due settimane, 3 per una settimana e una lenzuola in piu', 4 per due settimane e una lenzuola in piu'" << endl;
 cin >> scelta;

 switch (scelta) {
     case 1:
      CostoTot = QuotaFissa + TarUnaSett;
      cout << "Il costo totale sara': " << CostoTot<< " euro";
      break;
    case 2:
      CostoTot = QuotaFissa + TarDueSett;
      cout << "Il costo totale sara': " << CostoTot << " euro";
      break;
    case 3:
      CostoTot = QuotaFissa + TarUnaSett + supplLenz;
      cout << "Il costo totale sara': " << CostoTot << " euro";
      break;
    case 4:
      CostoTot = QuotaFissa + TarDueSett + supplLenz;
      cout << "Il costo totale sara': " << CostoTot << " euro";
      break;
    default:
      cout << "Selezione non disponibile";

 }

    return 0;
}