#include <stdio.h>
#include <stdlib.h>

int main () {

    int num1, num2, sommaComp, sommaMent;
    printf("INDOVINA LA SOMMA\n");
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);
    sommaComp = num1 + num2;
    printf("Inserisci la somma tra i due numeri: ");
    scanf("%d", &sommaMent);

    if (sommaMent == sommaComp){
        printf("La somma e' %d. Bravo hai indovinato al primo tentativo.", sommaComp);
    }
    else if (sommaMent != sommaComp ){
        printf("Hai sbagliato, prova ancora: ");
        scanf("%d", &sommaMent);
    
    if (sommaMent == sommaComp){
        printf("La somma e' %d. Bravino hai indovinato al secondo tentativo.", sommaComp);
    }
    else{
      printf("Ti serve un ripasso di matematica");
    }
 }


    return 0;
}