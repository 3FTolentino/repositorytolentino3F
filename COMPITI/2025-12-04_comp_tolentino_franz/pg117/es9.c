#include <stdio.h>
#include <stdlib.h>

int main () {

    float temp1, temp2, temp3, limite, media;

    printf("Inserisci il limite di temperatura di accensione: ");
    scanf("%f", &limite); 
    printf("Inserisci i i valori delle temperature in tre punti diversi dell'edificio:\n");
    scanf("%f %f %f", &temp1, &temp2, &temp3);

    media = (temp1 + temp2 + temp3) / 3;

    if (media < limite) {
        printf("Il sistema di riscaldamento verra' acceso.\n");
    }
    else {
        printf("Il sistema di riscaldamento non verra' acceso.\n");
    }
    
    return 0;
}