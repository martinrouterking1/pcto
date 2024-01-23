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
    if ((b-a)==(c-b)){
        printf("I numeri possono essere considerati in progressione aritmetica.\n");
    }
    else {
        printf("I numeri non possono essere considerati in progressione aritmetica.\n");
    }
}