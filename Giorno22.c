#include <stdio.h>
int main() {
 
    printf ("Inserisci l'età di Simone \n");
    int a;
    scanf("%d", &a);
    printf ("Inserisci l'età di Angelica \n");
    int b;
    scanf("%d", &b);
    printf ("Inserisci l'età di Matilde \n");
    int c;
    scanf("%d", &c);
    printf ("Inserisci l'età di Elisa \n");
    int d;
    scanf("%d", &d);
    printf("L'età di Simone è: %d\n", a );
    printf("L'età di Angelica è: %d\n", b );
    printf("L'età di Matilde è: %d\n", c );
    printf("L'età di Elisa è: %d\n", d );
    printf("La somma delle vostre età è %d \n", a+b+c+d);
    
}