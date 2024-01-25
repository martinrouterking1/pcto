#include <stdio.h>

float radicequadrata(float delta) {
    float guess = delta / 3.0; // Inizializza il guess a metà del numero
    float low = 0.0;
    float high = delta;
    float errore_accettato = 0.00001;

    while ((guess * guess - delta) > errore_accettato || (delta - guess * guess) > errore_accettato) {
        if (guess * guess > delta) {
            high = guess; 
        } else {
            low = guess; 
        }
        guess = (high + low) / 2.0; 
    }

    return guess;
}

int main (){
    printf("Inserisci il coefficente di x^2\n");
    int coefficentequadrato;
    scanf("%d", &coefficentequadrato);
    printf("Inserisci il coefficente di x\n");
    int coefficentex;
    scanf("%d", &coefficentex);
    printf("Inserisci il valore del terzo membro\n");
    int terzomembro;
    scanf("%d", &terzomembro);
    float delta = (((float)coefficentex)*((float)coefficentex))-(4*coefficentequadrato*terzomembro);
    float radicedelta = radicequadrata(delta); 
        if ((((float)coefficentex)*((float)coefficentex))>(4*coefficentequadrato*terzomembro)){
            printf("Il valore di x1 è: %f\nIl valore di x2 è: %f\n", (-((float)coefficentex)+radicedelta)/(2*coefficentequadrato), (-((float)coefficentex)-radicedelta)/(2*coefficentequadrato));
        }
        else if ((((float)coefficentex)*((float)coefficentex))<(4*coefficentequadrato*terzomembro)){
            printf("Le soluzioni non sono numeri reali\n");
        }
        else {
            printf("Entrambe le x hanno valore: %f\n",((-((float)coefficentex)+radicedelta)/(2*coefficentequadrato)));
        }

    return 0;
}

