#include <stdio.h>
#include <stdlib.h>

int main () {

 const float QuotaFissa= 100 , TarUnaSett= 600, TarDueSett= 1100, supplLenz= 20;
 int scelta;
 float CostoTot;
 printf("Inserisci il tempo di soggiorno e leggerai opzioni aggiuntive per una lenzuola in piu', digita: 1 Per una settimana, 2 per due settimane, 3 per una settimana e una lenzuola in piu', 4 per due settimane e una lenzuola in piu':\n");
 scanf("%d", &scelta);

 switch (scelta) {
     case 1:
      CostoTot = QuotaFissa + TarUnaSett;
      printf("Il costo totale sara' %.2f euro", CostoTot);
      break;
    case 2:
      CostoTot = QuotaFissa + TarDueSett;
      printf("Il costo totale sara' %.2f euro", CostoTot);
      break;
    case 3:
      CostoTot = QuotaFissa + TarUnaSett + supplLenz;
      printf("Il costo totale sara' %.2f euro", CostoTot);
      break;
    case 4:
      CostoTot = QuotaFissa + TarDueSett + supplLenz;
      printf("Il costo totale sara' %.2f euro", CostoTot);
      break;
    default:
      printf("Selezione non disponibile");
 }


    return 0;
}