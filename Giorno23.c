#include <stdio.h>

int main () {
    printf("A quanti anni puoi prendere la patente nel tuo paese? \n");
    int a;
    scanf("%d", &a);
    printf("Quanti anni hai? \n");
    int b;
    scanf("%d", &b);
    if (a>b){
        printf("Devi ancora aspettare %d anni prima di poter guidare \n", a-b);
    }
    else {
        printf("Buona fortuna con l'esame! \n");
    }
}