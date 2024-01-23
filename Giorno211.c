#include <stdio.h>
int main (){
        int i = 0;
        while (i<=0){
        printf("Inserisci il numero di articoli che desideri acquistare:\n");
        float acq;
        scanf("%f", &acq);
        if(acq<0){
            printf("Errore\n");
            return 0;
        }
        else if (acq>50){
            printf("Il totale è: %f\n", (acq*5)-(acq*0.75));
        }
        else if (acq>30){
            printf("Il totale è: %f\n", (acq*5)-(acq*0.5));
        }
        else {
            printf("Il totale è: %f\n", (acq*5));
        }
        
    }
}