#include <stdio.h>

void somma(float x, float y ){
    printf("La somma dei valori inseriti è: %f\n", (x+y));

}

void sottrazione(float x, float y ){
    printf("La sottrazione dei valori inseriti è: %f\n", (x-y));
}

void moltiplicazione(float x, float y){
    printf("La moltiplicazione dei valori inseriti è: %f\n", (x*y));
}

void divisione(float x, float y){
    printf("La divisione dei valori inseriti è: %f\n", (x/y));
}

int main (){
    printf("Inserisci il primo numero: \n");
    float x;
    scanf("%f", &x);
    printf("Inserisci il secondo numero: \n");
    float y;
    scanf("%f", &y);
    sceltaoperazione:
    printf("Seleziona il numero dell'operazione che vuoi eseguire\n1. Addizione\n2. Sottrazione\n3. Moltiplicazione\n4. Divisione\n");
    int operazione;
    scanf("%d", &operazione);
    if (operazione==1){
        somma(x, y);
    }
    else if (operazione==2){
        sottrazione(x, y);
    }
    else if (operazione==3){
        moltiplicazione(x, y);
    }
    else if (operazione==4){
        divisione(x, y);
    }
    else {
        printf("Operazione non riconosciuta\n");
        goto sceltaoperazione;
    }
}