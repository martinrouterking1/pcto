#include <stdio.h>

int main()
{
      printf("Inserisci il primo numero: \n");
      int a;
      scanf("%d", &a);
      printf("Inserisci il secondo numero: \n");
      int b;
      scanf("%d", &b);
      int c = a + b;
      int d = a*b;
      float e = ((float)a)/b;
      int f = a-b;
      printf("Somma: %i \nSottrazione: %i \nMoltiplicazione: %i \nDivisione: %f \n", c, f, d, e);
  }

 