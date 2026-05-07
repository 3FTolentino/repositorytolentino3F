#include <stdio.h>
#include <stdlib.h>

int main () {
    int temp1, temp2, temp3, temp4, temp5;
    
    printf("Inserisci la prima temperatura:\n");
    scanf("%d", &temp1);
    if (temp1>=60 && temp1<85) {
        printf("Umidita' alta\n");
    }
    else
    printf("Umidita' molto alta\n");

    if (temp1<= 60 && temp1<=31){
        printf("Umidita normale\n");
    }
    else if (temp1<=30){
        printf("Umidita bassa\n");
    }
    
    printf("Inserisci la prima temperatura:\n");
    scanf("%d", &temp2);
    if (temp2>=60 && temp2<85) {
        printf("Umidita' alta\n");
    }
    else
    printf("Umidita' molto alta\n");

    if (temp2<= 60 && temp2<=31){
        printf("Umidita normale\n");
    }
    else if (temp2<=30){
        printf("Umidita bassa\n");
    }
    

    return 0;
}