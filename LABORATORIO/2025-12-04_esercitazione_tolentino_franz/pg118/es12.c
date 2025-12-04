#include <stdio.h>
#include <stdlib.h>

int main () {

    float eta1, eta2, eta3, etaMagg, etaMin, differenza;

    printf("Inserisci le tre eta'dei fratelli:  ");
    scanf("%f %f %f", &eta1, &eta2, &eta3);  

    if (eta1 > eta2 && eta1 > eta3) {
        eta1 = etaMagg;
    }
    else if (eta2 > eta1 && eta2 > eta3) {
        eta2 = etaMagg;
    }
    else if (eta3 > eta1 && eta3 > eta2) {
        eta3 = etaMagg;
    }
    if (eta1 < eta2 && eta1 < eta3) {
        eta1 = etaMin;
    }
    else if (eta2 < eta1 && eta2 < eta3) {
        eta2 = etaMin;
    }
    else if (eta3 < eta1 && eta3 < eta2) {
        eta3 = etaMin;
    }

    differenza = etaMagg - etaMin;
    printf( "La differenza tra il fratello maggiore e quello minore e'" "%f", differenza);
    return 0;


   
    }
