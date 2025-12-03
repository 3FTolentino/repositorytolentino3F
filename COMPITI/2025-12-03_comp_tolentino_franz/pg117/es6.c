#include <stdio.h>
#include <stdlib.h>

int main () {

    char lett;

    printf("Digita un carattere (S/s/N/n): ");
    scanf(" %c", &lett);   

    if (lett == 'S' || lett == 's') {
        printf("Si\n");
    }
    else if (lett == 'N' || lett == 'n') {
        printf("No\n");
    }
    else {
        printf("Errato\n");
    }
    
    return 0;
}