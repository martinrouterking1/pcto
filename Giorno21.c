#include <stdio.h>

int main() {
    printf("Di quanti numeri vuoi fare la media? \n");
    int a;
    scanf("%d", &a);
    
    int i[a];
    int b, somma = 0;
    float media;

    for (b = 0; b < a; b++) {
        printf("Inserisci un numero: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
    }

    media = (float)somma / a; 
    printf("La media dei numeri che hai inserito è: %f \n", media);


}