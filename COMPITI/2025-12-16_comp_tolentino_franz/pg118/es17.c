#include <stdio.h>
#include <stdlib.h>

int main () {
    char quot1[25], quot2[25], quot3[25];
    int cop1, cop2, cop3, copMagg;
    float Guad;
    printf("Scrivi i nomi dei tre quotidiani e le loro copie vendute.\n");
    printf("Nome del primo: "); 
    scanf("%s", quot1);
    printf("Numero delle copie vendute del primo: ");
    scanf("%d", &cop1);
    printf("Nome del secondo: "); 
    scanf("%s", quot2);
    printf("Numero delle copie vendute del secondo: ");
    scanf("%d", &cop2);
    printf("Nome del terzo: "); 
    scanf("%s", quot3);
    printf("Numero delle copie vendute del terzo: ");
    scanf("%d", &cop3);
    
    if (cop1 > cop2 && cop1 > cop3) {
        copMagg = cop1;
    }
    else if (cop2 > cop1 && cop2 > cop3) {
        copMagg = cop2;
    }
    else if (cop3 > cop1 && cop3 > cop2) {
        copMagg = cop3;
    }


    if (copMagg <= 200){
        Guad = 0.10 * copMagg;
    }
    else if (copMagg > 200 && copMagg < 300 ){
        Guad = 0.20 * copMagg;
    }
    else if (copMagg > 300){
        Guad = 0.30 * copMagg;
    }

printf("L'incasso dell'edicolante e' di %.2f euro.", Guad);

return 0;
}
