#include <stdio.h>

int main (){
    int numero, div=1;
	int conta=0;
	printf("inserisci il numero: ");
        scanf("%d", &numero);
    


	while(conta<3 && div<=numero/2)
	{
		if(numero%div==0)  
			conta=conta+1;	
		div=div+1;
	}
	if (conta==1)
	   printf("il numero e' primo\n ");
	else
	   printf("il numero non e' primo\n ");

}