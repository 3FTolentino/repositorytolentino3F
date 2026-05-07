#include <stdio.h>
#include <stdlib.h>

int main () {

    int eta;
    
    printf("Inserisci la tua eta':\n");
    scanf("%d", &eta);
    
    if (eta>0 && eta<=12) {
        printf("Bambino\n");
    }
    else if (eta>=13 && eta<=17) {
        printf("Adolescente\n");
    }
     else if (eta>=18 && eta<=64) {
        printf("Adulto\n");
    }
    else if (eta>=65 && eta<=120) {
        printf("Senior\n");
     }
    
    else
    printf("Errore: eta' non valida\n");
    


    return 0;
}