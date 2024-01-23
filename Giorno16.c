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
    printf("Babbo Natale non esiste, mi dispiace \n" );
    }
    else if (a<=18) {
        printf("Studia che la maturità sta arrivando \n");
    }
    else {
        printf("Vai a lavorare \n");
    }
    
  } 

 