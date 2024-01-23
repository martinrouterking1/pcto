#include <stdio.h>
int main()
{
    printf("Inserisci un numero:\n");
    int a;
    scanf("%d", &a);
    if ((a%2)<1){
        printf("Il numero che hai inserito è pari\n");
        }
    else {  
        printf("Il numero che hai inserito è dispari \n");
    }   
}