#include <stdio.h>

int main (){
    printf("In che anno sei nato? \n");
    int anno;
    scanf("%d", &anno);
    if (anno==1969){
        printf("Sei nato nello stesso anno in cui l'uomo è andato sulla Luna \n");
    }
    if (anno<1969){
        printf("Sei nato %d anni prima anno in cui l'uomo è andato sulla Luna \n ", 1969-anno);
    }
    if (anno>1969){
        printf("Sei nato %d anni dopo l'anno in cui l'uommo è andato sulla Luna\n", anno-1969);
    }
}