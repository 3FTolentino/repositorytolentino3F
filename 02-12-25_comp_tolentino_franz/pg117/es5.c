#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float a, b, c, x, x1, x2;
    double delta;
    printf("Inserisci il valore di a: ");
    scanf("%f" , &a);
    printf("Inserisci il valore di b: ");
    scanf("%f" , &b);
    printf("Inserisci il valore di c: ");
    scanf("%f" , &c);

    if (a != 0) {
    delta = b*b - 4*a*c;
    
    if (delta>0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("%.2f e' il valore di x1\n" , x1); 
        printf("%.2f e' il valore di x2\n" , x2); 

    }
    
    else if (delta == 0) {
        x = -b / (2*a);
        printf("%.2f e' il valore di x (soluzione coincidente)\n" , x); 
    }

    else {
        printf("Delta e' minore di 0 quindi e' impossibile");
    }
}

else {
    printf("L'equazione non e' di secondo grado\n");
}
    

    return 0;
}