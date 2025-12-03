#include <stdio.h>
#include <stdlib.h>

int main () {

    float num;

    printf("Scrivi un numero che si trova tra -5 e +10: ");
    scanf("%f", &num);   

    if (num < -5 || num > 10) {
        printf("Il dato e' fuori intervallo\n");
    }
    
    else {
        printf("OK\n");
    }
    
    return 0;
}