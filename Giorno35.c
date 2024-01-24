#include <stdio.h>

int main (){
    int numero, divisore=1;
	int conta=0;
	inizio:
    printf("inserisci il numero: ");
        scanf("%d", &numero);
    


	while(conta<2 && divisore<=numero/2)
	{
		if(numero%divisore==0)  
			conta=conta+1;	
		divisore=divisore+1;
	}
	if (conta==1){
	   printf("il numero e' primo\n ");
    goto inizio;
    }
	else {
	   printf("il numero non e' primo\n ");
    goto inizio;
    }

}