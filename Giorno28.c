#include <stdio.h>
int main (){
   printf("Inserisci il primo numero: \n");
    float a;
    scanf("%f", &a);
    printf("Inserisci il secondo numero: \n");
    float b;
    scanf("%f", &b);
    printf("Inserisci il terzo numero: \n");
    float c;
    scanf("%f", &c);
    if ((a+b)>c && (a+c)>b && (b+c)>a ) {
        printf("Queste possono essere le misure dei lati di un triangolo\n");
    }
    else {
        printf("Queste non possono essere le misure dei lati di un triangolo\n");
    }
}