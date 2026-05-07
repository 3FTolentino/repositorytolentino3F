#include <stdio.h>
#include <stdlib.h>

int main (){

    int art, prezzopag;
    printf("Ecco l'elenco degli oggetti e dei loro prezzi:\n");
    printf("Matita ad un euro\n");
    printf("Quaderno a due euro\n");
    printf("Libro a sette euro\n");

    printf("Seleziona l'articolo digitando: 1 per la matita, 2 per il quaderno, 3 per il libro\n");
    scanf("%d", &art);

    switch (art) {
        case 1:
          printf("Quanto paghi?\n");
          scanf("%d", prezzopag);
         if (prezzopag >= 1) {
            printf("Acquisto completato\n");
         }
         else 
         printf("Importo insufficiente");
         break;
        
        case 2:
          printf("Quanto paghi?\n");
          scanf("%d", prezzopag);
         if (prezzopag >= 2) {
            printf("Acquisto completato\n");
         }
         else 
         printf("Importo insufficiente");
         break;

        case 3:
          printf("Quanto paghi?\n");
          scanf("%d", prezzopag);
         if (prezzopag >= 7) {
            printf("Acquisto completato\n");
         }
         else 
         printf("Importo insufficiente");
         break;

         default:
          printf("Scelta non valida\n");
        

    }

    
    return 0;
}