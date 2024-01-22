#include <stdio.h>

int main()
{
     printf("Ciao! Come ti chiami? \n");
      char s[80];
      scanf ("%s" , s );
      printf ("Ciao %s, quanti anni hai? \n ", s);
    int a;
    scanf("%d", &a);
    if (a<8) {
    printf("Babbo Natale non esiste :D \n" );
    }
    else if (a<=18) {
        printf("La maturità sta arrivando :D \n");
    }
    else {
        printf("Vai a lavorare :D \n");
    }
    
  } 

 