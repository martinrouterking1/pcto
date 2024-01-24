#include <stdio.h>

int main (){
    printf("Digita un carattere: \n");
    char carattere[1];
    scanf("%s", &carattere);
    if (strcmp(carattere, "a")==0 || (strcmp(carattere, "e"))==0 || (strcmp(carattere, "i"))==0 || (strcmp(carattere, "o"))==0 || (strcmp(carattere, "u"))==0 || (strcmp(carattere, "A"))==0 || (strcmp(carattere, "E"))==0 || (strcmp(carattere, "I"))==0 || (strcmp(carattere, "O"))==0 || (strcmp(carattere, "U"))==0){
        printf("\nIl carattere che hai inserito è una vocale\n");
    }
    else {
        printf("\nIl carattere che hai inserito è una consonante\n");
    }
}