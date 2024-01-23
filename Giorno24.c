#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    
    char professore[] = "Professore";
    char studente[] = "Studente";
    
    printf("\nBenvenuto nello spazio personale del registro elettronico. \nPer tornare all'inizio in qualsiasi momento digita il carattere '+'\nPer tornare al passaggio precedente digita '.' ");
    domanda:
    printf("\n\nQual è il tuo ruolo? \n 1. Professore \n 2. Studente\n\n");

    char ruolo[40];
    scanf("%s", ruolo);
    int i=0;
    

    if (strcmp(ruolo, "1") == 0) {
        printf("\nBenvenuto professore! \n");
        richiestanomeprofessore:
        printf("Inserisca i suoi dati. \nNome: ");
        char nomeprofessore[80];
        scanf("%s", nomeprofessore);
        if (strcmp(nomeprofessore, "+")== 0 ){
            goto domanda;
        }
        if (strcmp(nomeprofessore, ".")== 0 ){
            goto domanda;
        }
        richiestacognomeprofessore:
        printf("Cognome: ");
        char cognomeprofessore[80];
        scanf("%s", cognomeprofessore); 
         if (strcmp(cognomeprofessore, "+")== 0 ){
            goto domanda;
        }
        if (strcmp(cognomeprofessore, ".")== 0 ){
            goto richiestanomeprofessore;
        }
        richiestaetaprofessore:
        printf("Età: ");
        char etaprofessore[80];
        scanf("%s", etaprofessore);
         if (strcmp(etaprofessore, "+")== 0 ){
            goto domanda;
        }
        if (strcmp(etaprofessore, ".")== 0 ){
            goto richiestacognomeprofessore;
        }
        richiestacorsoprofessore:
        printf("Benvenuto professore, in che facoltà insegna? \n");
        char corsoprofessore[80];
       scanf("%s",corsoprofessore);
        if (strcmp(corsoprofessore, "+")== 0 ){
            goto domanda;
        }
        if (strcmp(corsoprofessore, ".")== 0 ){
            goto richiestaetaprofessore;
        }
        sleep(1);
        printf("\nLa stiamo reinderizzando alla pagina di accesso per poter completare la sua registrazione\n");
        sleep(1);
       
        printf("\nNome: %s\nCognome: %s\nEtà: %s\nFacoltà: %s\n\nVuole confemrare?\n", nomeprofessore, cognomeprofessore, etaprofessore, corsoprofessore);
        sleep (1);
        char conferma[80];      
        scanf("%s\n", conferma);
        if (strcmp(conferma, "Confermo")==0 || (strcmp(conferma, "Si"))==0){
        printf("\n\nRegistrazione completata!\n");}
        sleep (1);
        
    } else if (strcmp(ruolo, "2") == 0) {
        printf("\nBenvenuto! \n");
        richiestanomestudente1:
        printf("Inserisci i tuoi dati. \nNome: ");
        char nomestudente[80];
        scanf("%s", nomestudente);
         if (strcmp(nomestudente, "+")== 0 ){
            goto domanda;
        }
         if (strcmp(nomestudente, ".")== 0 ){
            goto domanda;
        }
        richiestacognomestudente:
        printf("Cognome: ");
        char cognomestudente[80];
        scanf("%s", cognomestudente); 
         if (strcmp(cognomestudente, "+")== 0 ){
            goto domanda;
        }
         if (strcmp(cognomestudente, ".")== 0 ){
            goto richiestanomestudente1;
        }
        richiestaetastudente:
        printf("Età: ");
        char etastudente[80];
        scanf("%s", etastudente); 
        if (strcmp(etastudente, "+")== 0 ){
            goto domanda;
        }
         if (strcmp(etastudente, ".")== 0 ){
            goto richiestacognomestudente;
        }
        richiestannofrequentato:
        printf("\nBenvenuto %s, che anno frequenti? \n", nomestudente);
        char annofrequentato[80];
        scanf("%s", annofrequentato);
         if (strcmp(annofrequentato, "+")== 0 ){
            goto domanda;
        }
         if (strcmp(annofrequentato, ".")== 0 ){
            goto richiestaetastudente;
        }
        sleep(1);
        printf("\nTi stiamo reinderizzando alla pagina di accesso per poter completare la tua registrazione\n");
        sleep(1);
        printf("\nNome: %s\nCognome: %s\nEtà: %s\nAnno frequentato: %s\n\nVuoi confemrare?\n", nomestudente, cognomestudente, etastudente, annofrequentato);
        sleep (1);
        char conferma[80];      
        scanf("%s\n", conferma);
        if (strcmp(conferma, "Confermo")==0 || (strcmp(conferma, "Si"))==0){
        printf("\n\nRegistrazione completata!\n");}
        sleep (1);
    } else if (strcmp(ruolo, professore) == 0) {
        printf("\nBenvenuto professore! \n");
        richiestanomeprofessore1:
        printf("Inserisca i suoi dati. \nNome: ");
        char nomeprofessore[80];
        scanf("%s", nomeprofessore);
        if (strcmp(nomeprofessore, "+")== 0 ){
            goto domanda;
        }
        if (strcmp(nomeprofessore, ".")== 0 ){
            goto domanda;
        }
        richiestacognomeprofessore1:
        printf("Cognome: ");
        char cognomeprofessore[80];
        scanf("%s", cognomeprofessore); 
         if (strcmp(cognomeprofessore, "+")== 0 ){
            goto domanda;
        }
        if (strcmp(cognomeprofessore, ".")== 0 ){
            goto richiestanomeprofessore1;
        }
        richiestaetaprofessore1:
        printf("Età: ");
        char etaprofessore[80];
        scanf("%s", etaprofessore);
         if (strcmp(etaprofessore, "+")== 0 ){
            goto domanda;
        }
        if (strcmp(etaprofessore, ".")== 0 ){
            goto richiestacognomeprofessore1;
        }
        richiestacorsoprofessore1:
        printf("Benvenuto professore, in che facoltà insegna? \n");
        char corsoprofessore[80];
        scanf("%s", corsoprofessore); 
        if (strcmp(corsoprofessore, "+")== 0 ){
            goto domanda;
        }
        if (strcmp(corsoprofessore, ".")== 0 ){
            goto richiestaetaprofessore1;
        }
        sleep(1);
        printf("\nLa stiamo reinderizzando alla pagina di accesso per poter completare la sua registrazione\n");
        sleep(1);
        printf("\nNome: %s\nCognome: %s\nEtà: %s\nFacoltà: %s\n\nVuole confemrare?\n", nomeprofessore, cognomeprofessore, etaprofessore, corsoprofessore);
        sleep (1);
        char conferma[80];      
        scanf("%s\n", conferma);
        if (strcmp(conferma, "Confermo")==0 || (strcmp(conferma, "Si"))==0){
        printf("\n\nRegistrazione completata!\n");}
        sleep (1);
    } else if (strcmp(ruolo, studente) == 0) {
         printf("\nBenvenuto! \n");
        richiestanomestudente2:
        printf("Inserisci i tuoi dati. \nNome: ");
        char nomestudente[80];
        scanf("%s", nomestudente);
         if (strcmp(nomestudente, "+")== 0 ){
            goto domanda;
        }
         if (strcmp(nomestudente, ".")== 0 ){
            goto domanda;
        }
        richiestacognomestudente2:
        printf("Cognome: ");
        char cognomestudente[80];
        scanf("%s", cognomestudente); 
         if (strcmp(cognomestudente, "+")== 0 ){
            goto domanda;
        }
         if (strcmp(cognomestudente, ".")== 0 ){
            goto richiestanomestudente2;
        }
        richiestaetastudente2:
        printf("Età: ");
        char etastudente[80];
        scanf("%s", etastudente); 
        if (strcmp(etastudente, "+")== 0 ){
            goto domanda;
        }
         if (strcmp(etastudente, ".")== 0 ){
            goto richiestacognomestudente2;
        }
        richiestannofrequentato2:
        printf("\nBenvenuto %s, che anno frequenti? \n", nomestudente);
        char annofrequentato[80];
        scanf("%s", annofrequentato);
         if (strcmp(annofrequentato, "+")== 0 ){
            goto domanda;
        }
         if (strcmp(annofrequentato, ".")== 0 ){
            goto richiestaetastudente2;
        }
        sleep(1);
        printf("\nTi stiamo reinderizzando alla pagina di accesso per poter completare la tua registrazione\n");
        sleep(1);
        printf("\nNome: %s\nCognome: %s\nEtà: %s\nAnno frequentato: %s\n\nVuoi confemrare?\n", nomestudente, cognomestudente, etastudente, annofrequentato);
        sleep (1);
        char conferma[80];      
        scanf("%s\n", conferma);
        if (strcmp(conferma, "Confermo")==0 || (strcmp(conferma, "Si"))==0){
        printf("\n\nRegistrazione completata!\n");}
        sleep (1);
    } else {
        printf("\nRuolo non riconosciuto. \n");
        goto domanda;
    }
        
    return (0);
}