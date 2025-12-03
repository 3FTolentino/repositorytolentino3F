#include <stdio.h>
#include <stdlib.h>

int main () {

    float num1, num2, num3;

    printf("Inserisci tre numeri e verifica se sono in progressione aritmetica:\n");
    scanf("%f %f %f", &num1, &num2, &num3);   

    if ((num2-num1) == (num3-num2)) {
        printf("I numeri sono in progressione aritmetica\n");
    }
    else {
        printf("I numeri non sono in progressione aritmetica\n");
    }
    
    return 0;
}