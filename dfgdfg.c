#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#define DIM 20

int main(){
typedef struct tessera_s
{
	char codice[16], cognome[LUNGHEZZA], nome[LUNGHEZZA], comune[CITTA];
	int anno, mese, giorno, sesso;
}
tessera_t;

int
cognome_codice(tessera_t *tessera);
{
	int i, c;
	
	for(i=0, c=0; i<strlen(tessera->cognome) && c<3; i++)
	{
		if(tessera->cognome[i]!='A' && tessera->cognome[i]!='E' && tessera->cognome[i]!='I' && tessera->cognome[i]!='O' && tessera->cognome[i]!='U')
		{
			tessera->codice[c]=tessera->cognome[i];
			c++;
		}
	}
	if(c<3)
	{
		for(i=0; i<strlen(tessera->cognome) && c<3; i++)
		{
			if(tessera->cognome[i]=='A' || tessera->cognome[i]=='E' || tessera->cognome[i]=='I' || tessera->cognome[i]=='O' || tessera->cognome[i]=='U')
			{
				tessera->codice[c]=tessera->cognome[i];
				c++;
			}
		}
		if(c<3)
		{
			for(;c<3;c++)
			{
				tessera->codice[c]='X';
			}
		}
	}
	return 0;
}

int
nome_codice(tessera_t *tessera)
{
	char consonanti[LUNGHEZZA];
	int i, c, n;
	if(strlen(tessera->nome))
	{
		for(i=0, c=0; i<strlen(tessera->nome); i++)
		{
			if(tessera->nome[i]!='A' && tessera->nome[i]!='E' && tessera->nome[i]!='I' && tessera->nome[i]!='O' && tessera->nome[i]!='U')
			{
				consonanti[c]=tessera->nome[i];
				c++;
			}
		}
		if(c>=3)
		{
			tessera->codice[3]=consonanti[0];
			tessera->codice[4]=consonanti[2];
			tessera->codice[5]=consonanti[3];
		}
		else
		{
			for(n=3, i=0; i<c && n<6; i++)
			{
				tessera->codice[n]=consonanti[i];
				n++;	
			}
			if(n<6)
			{
				for(i=0; i<strlen(tessera->nome) && n<6; i++)
				{
					if(tessera->nome[i]=='A' || tessera->nome[i]=='E' || tessera->nome[i]=='I' || tessera->nome[i]=='O' || tessera->nome[i]=='U')
					{
						tessera->codice[n]=tessera->nome[i];
						n++;
					}
				}
				if(n<6)
				{
					for(;n<6;n++)
					{
						tessera->codice[n]='X';
					}
				}
			}
		}
	}
	else
	{
		tessera->codice[3]='X';
		tessera->codice[4]='X';
		tessera->codice[5]='X';
	}
	return 0;
}

int
anno_nascita_codice(tessera_t *tessera)
{
	char temp[3];
	sprintf(temp, "%.2d", tessera->anno%100);
	tessera->codice[6]=temp[0];
	tessera->codice[7]=temp[1];
	return 0;
}

int
mese_nascita_codice(tessera_t *tessera)
{
	switch(tessera->mese)
	{
		case 1:
			tessera->codice[8]='A';
			break;
		case 2:
			tessera->codice[8]='B';
			break;
		case 3:
			tessera->codice[8]='C';
			break;
		case 4:
			tessera->codice[8]='D';
			break;
		case 5:
			tessera->codice[8]='E';
			break;
		case 6:
			tessera->codice[8]='H';
			break;
		case 7:
			tessera->codice[8]='L';
			break;
		case 8:
			tessera->codice[8]='M';
			break;
		case 9:
			tessera->codice[8]='P';
			break;
		case 10:
			tessera->codice[8]='R';
			break;
		case 11:
			tessera->codice[8]='S';
			break;
		case 12:
			tessera->codice[8]='T';
			break;
	}
	return 0;
}

int
giorno_nascita_sesso_codice(tessera_t *tessera)
{
	char temp[3];
	if(sesso)
	{
		sprintf(temp, "%.2d", tessera->giorno+40);
	}
	else
	{
		sprintf(temp, "%.2d", tessera->giorno);
	}
	tessera->codice[9]=temp[0];
	tessera->codice[10]=temp[1];
	return 0;
}

int
verifica_codice(tessera_t *tessera)
{
	int counter, tot, temp;
	for(counter=0, tot=0; counter<15; counter++)
	{
		if(counter%2==0)
		{
			switch(tessera->codice[counter])
			{
				case '0':
					temp=1;
					break;
				case '1':
					temp=0;
					break;
				case '2':
					temp=5;
					break;
				case '3':
					temp=7;
					break;
				case '4':
					temp=9;
					break;
				case '5':
					temp=13;
					break;
				case '6':
					temp=15;
					break;
				case '7':
					temp=17;
					break;
				case '8':
					temp=19;
					break;
				case '9':
					temp=21;
					break;
				case 'A':
					temp=1;
					break;
				case 'B':
					temp=0;
					break;
				case 'C':
					temp=5;
					break;
				case 'D':
					temp=7;
					break;
				case 'E':
					temp=9;
					break;
				case 'F':
					temp=13;
					break;
				case 'G':
					temp=15;
					break;
				case 'H':
					temp=17;
					break;
				case 'I':
					temp=19;
					break;
				case 'J':
					temp=21;
					break;
				case 'K':
					temp=2;
					break;
				case 'L':
					temp=4;
					break;
				case 'M':
					temp=18;
					break;
				case 'N':
					temp=20;
					break;
				case 'O':
					temp=11;
					break;
				case 'P':
					temp=3;
					break;
				case 'Q':
					temp=6;
					break;
				case 'R':
					temp=8;
					break;
				case 'S':
					temp=12;
					break;
				case 'T':
					temp=14;
					break;
				case 'U':
					temp=16;
					break;
				case 'V':
					temp=10;
					break;
				case 'W':
					temp=22;
					break;
				case 'X':
					temp=25;
					break;
				case 'Y':
					temp=24;
					break;
				case 'Z':
					temp=23;
					break;
			}
		}
		else
		{
			switch(tessera->codice[counter])
			{
				case '0':
					temp=0;
					break;
				case '1':
					temp=1;
					break;
				case '2':
					temp=2;
					break;
				case '3':
					temp=3;
					break;
				case '4':
					temp=4;
					break;
				case '5':
					temp=5;
					break;
				case '6':
					temp=6;
					break;
				case '7':
					temp=7;
					break;
				case '8':
					temp=8;
					break;
				case '9':
					temp=9;
					break;
				case 'A':
					temp=0;
					break;
				case 'B':
					temp=1;
					break;
				case 'C':
					temp=2;
					break;
				case 'D':
					temp=3;
					break;
				case 'E':
					temp=4;
					break;
				case 'F':
					temp=5;
					break;
				case 'G':
					temp=6;
					break;
				case 'H':
					temp=7;
					break;
				case 'I':
					temp=8;
					break;
				case 'J':
					temp=9;
					break;
				case 'K':
					temp=10;
					break;
				case 'L':
					temp=11;
					break;
				case 'M':
					temp=12;
					break;
				case 'N':
					temp=13;
					break;
				case 'O':
					temp=14;
					break;
				case 'P':
					temp=15;
					break;
				case 'Q':
					temp=16;
					break;
				case 'R':
					temp=17;
					break;
				case 'S':
					temp=18;
					break;
				case 'T':
					temp=19;
					break;
				case 'U':
					temp=20;
					break;
				case 'V':
					temp=21;
					break;
				case 'W':
					temp=22;
					break;
				case 'X':
					temp=23;
					break;
				case 'Y':
					temp=24;
					break;
				case 'Z':
					temp=25;
					break;
			}
			
		}
		tot=tot+temp;
	}
	switch(tot%26)
	{
		case 0:
			tessera->codice[15]='A';
			break;
		case 1:
			tessera->codice[15]='B';
			break;
		case 2:
			tessera->codice[15]='C';
			break;
		case 3:
			tessera->codice[15]='D';
			break;
		case 4:
			tessera->codice[15]='E';
			break;
		case 5:
			tessera->codice[15]='F';
			break;
		case 6:
			tessera->codice[15]='G';
			break;
		case 7:
			tessera->codice[15]='H';
			break;
		case 8:
			tessera->codice[15]='I';
			break;
		case 9:
			tessera->codice[15]='J';
			break;
		case 10:
			tessera->codice[15]='K';
			break;
		case 11:
			tessera->codice[15]='L';
			break;
		case 12:
			tessera->codice[15]='M';
			break;
		case 13:
			tessera->codice[15]='N';
			break;
		case 14:
			tessera->codice[15]='O';
			break;
		case 15:
			tessera->codice[15]='P';
			break;
		case 16:
			tessera->codice[15]='Q';
			break;
		case 17:
			tessera->codice[15]='R';
			break;
		case 18:
			tessera->codice[15]='S';
			break;
		case 19:
			tessera->codice[15]='T';
			break;
		case 20:
			tessera->codice[15]='U';
			break;
		case 21:
			tessera->codice[15]='V';
			break;
		case 22:
			tessera->codice[15]='W';
			break;
		case 23:
			tessera->codice[15]='X';
			break;
		case 24:
			tessera->codice[15]='Y';
			break;
		case 25:
			tessera->codice[15]='Z';
			break;
	}
	return 0;
}
}
