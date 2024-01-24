#include <stdio.h>
int main (){
   printf("Inserisci il valore della base: \n");
    float a;
    scanf("%f", &a);
    printf("Inserisci il valore del secondo lato: \n");
    float b;
    scanf("%f", &b);
    printf("Inserisci il valore del terzo lato: \n");
    float c;
    scanf("%f", &c);
    printf("Inserisci il valore dell'altezza del triangolo: \n");
    float d;
    scanf("%f", &d);
    if ((a+b)>c && (a+c)>b && (b+c)>a ) {
        printf("Queste possono essere le misure dei lati di un triangolo\n");
        printf("L'area del triangolo è: %f\n", (a*d)/2);
        printf("Il perimetro del triangolo è: %f\n", a+b+c);
    }
    else {
        printf("Queste non possono essere le misure dei lati di un triangolo\n");
    }
}