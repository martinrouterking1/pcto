#include <stdio.h>

int main (){
   printf("Inserisci la lunghezza del primo lato: \n");
    float a;
    scanf("%f", &a);
    printf("Inserisci la lunghezza del secondo lato: \n");
    float b;
    scanf("%f", &b);
    printf("Inserisci la lunghezza del terzo lato: \n");
    float c;
    scanf("%f", &c);
    if ((a+b)>c && (a+c)>b && (b+c)>a ) {
        if (a==b&&b==c){
            printf("Il triangolo è equilatero\n");
        }
        else if (a==b&&b!=c || b==c&&c!=a || a==c&&c!=b){
            printf("Il triangolo è isoscele\n");
        }
        else {
            printf("Il triangolo è scaleno\n");
        }
    }
    else {
        printf("Queste non possono essere le misure dei lati di un triangolo\n");
    }
}