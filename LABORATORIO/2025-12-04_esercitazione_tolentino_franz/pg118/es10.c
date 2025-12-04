#include <stdio.h>
#include <stdlib.h>

int main () {

    float eta;

    printf("Inserisci la tua eta':  ");
    scanf("%f", &eta);  

    if  (eta == 14 || eta == 15) {
        printf("Puoi guidare uno scooter con cilindrata fino a 50cc.\n");
    }
    else if (eta == 16 || eta == 17) {
        printf("Puoi guidare uno scooter con cilindrata fino a 50cc e la moto fino a 125cc.\n");
    }
    else if (eta == 18 || eta == 19 || eta == 20) {
        printf("Puoi guidare uno scooter con cilindrata fino a 50cc, la moto fino a 125cc e un'auto fino a 95 cavalli.\n");
    } 
    else if (eta >= 21) {
        printf("Puoi guidare auto o moto senza limitazioni\n");
    }
    
    
    return 0;
    }

    

