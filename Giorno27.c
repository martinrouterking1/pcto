#include <stdio.h>
int main (){
    printf("Inserisci un anno: \n");
    int a;
    scanf("%i", &a);
    if (a%4==0 && a%100>0 || x%400==0 ){
        printf("L'anno è bisestile.\n");
    }
    else {
        printf("L'anno non è bisestile.\n");
    }
}