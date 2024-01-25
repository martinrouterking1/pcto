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
    

    if (strcmp(ruolo, "1") == 0 || (strcmp(ruolo, "Professore")) == 0 || (strcmp(ruolo, "professore")) == 0) {
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
        
    } else if (strcmp(ruolo, "2") == 0 || (strcmp(ruolo, "Studente"))== 0 || (strcmp(ruolo, "studente"))==0 ) {
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
        scanf("%s", conferma);
        if (strcmp(conferma, "Confermo")==0 || (strcmp(conferma, "Si"))==0 || (strcmp(conferma, "si"))==0){
            printf("\n\nRegistrazione completata!\n");
            sleep (1);
            printf("\nBenvenuto nella home del registro elettronico.");
            sleep (1);
            selezionemateria:
            printf("\nSeleziona una materia per inserire, visualizzare i voti e calcolare la media.\n\n1. Matematica\n2. Fisica\n3. Italiano\n4. Latino\n5. Greco\n6. Inglese\n7. Storia\n8. Filosofia\n9. Scienze\n10. Scienze motorie\n\n");
            char materiaselezionata[80];
            scanf("%s", materiaselezionata);
        if (strcmp(materiaselezionata, ".")==0){
            goto selezionemateria;
        }
           char materiaselezionata[80];
    
    printf("Inserisci la materia (1 per Matematica): ");
    scanf("%s", materiaselezionata);

    if (strcmp(materiaselezionata, "1") == 0 || strcmp(materiaselezionata, "Matematica") == 0 || strcmp(materiaselezionata, "matematica") == 0) {
        printf("Cosa vuoi fare?\n1. Visualizzare i voti\n2. Aggiungere o modificare i voti\n");
        
        char azione[80];
        scanf(" %s", azione); // Ignora spazi bianchi
        
        if (strcmp(azione, "1") == 0 || strcmp(azione, "Visualizzare") == 0 || strcmp(azione, "Visualizzare i voti") == 0) {
            // Visualizzazione dei voti (da implementare)
            printf("Implementazione mancante per la visualizzazione dei voti.\n");
        } else if (strcmp(azione, "2") == 0 || strcmp(azione, "Aggiungere") == 0) {
            // Aggiunta o modifica dei voti
            printf("\nQuanti voti hai in matematica? \n");
            int numerovoti;
            scanf("%d", &numerovoti);

            int votimatematica[10000];
            int b, somma = 0;
            float media;

            for (b = 0; b < numerovoti; b++) {
                printf("Inserisci un voto: \n");
                scanf("%d", &votimatematica[b]);
                somma += votimatematica[b];
            }

            if (numerovoti > 0) {
                media = (float)somma / numerovoti;
                printf("La media dei voti che hai in matematica è: %f \n", media);

                if (media < 6) {
                    printf("\nSei a rischio debito!\n");
                } else {
                    printf("\nNon sei a rischio debito!\n");
                }

                char ritornopaginaprecedente[80];
                printf("\nVuoi tornare alla pagina precedente? (Si/No): ");
                scanf(" %s", ritornopaginaprecedente);

                if (strcmp(ritornopaginaprecedente, "Si") == 0 || strcmp(ritornopaginaprecedente, "si") == 0) {
                    printf("\nTornando alla selezione della materia...\n");
                    continue;
                } else {
                    return 0;
                }
            }
        } else {
            printf("Azione non valida.\n");
        }
    } else {
        printf("Materia non valida.\n");
    }

    return 0;
}
            
            

         
            if (strcmp(materiaselezionata, "2")==0 || (strcmp(materiaselezionata, "Fisica"))==0 || (strcmp(materiaselezionata, "fisica"))==0){
            printf("\nQuanti voti hai in fisica? \n");
            int numerovoti;
            scanf("%d", &numerovoti);
    
            int i[numerovoti];
            int b, somma = 0;
            float media;

        for (b = 0; b < numerovoti; b++) {
        printf("Inserisci un voto: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
        }

         media = (float)somma / numerovoti; 
         printf("La media dei voti che hai in fisica è: %f \n", media);
         if (media<6){
            printf("\nSei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
         }
        else {
            printf("\nNon sei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
                }
            }  
            if (strcmp(materiaselezionata, "3")==0 || (strcmp(materiaselezionata, "Italiano"))==0 || (strcmp(materiaselezionata, "italiano"))==0){
            printf("\nQuanti voti hai in italiano? \n");
            int numerovoti;
            scanf("%d", &numerovoti);
    
            int i[numerovoti];
            int b, somma = 0;
            float media;

        for (b = 0; b < numerovoti; b++) {
        printf("Inserisci un voto: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
        }

         media = (float)somma / numerovoti; 
         printf("La media dei voti che hai in italiano è: %f \n", media);
         if (media<6){
            printf("\nSei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
         }
        else {
            printf("\nNon sei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
                }
            } 
            if (strcmp(materiaselezionata, "4")==0 || (strcmp(materiaselezionata, "Latino"))==0 || (strcmp(materiaselezionata, "latino"))==0){
            printf("\nQuanti voti hai in latino? \n");
            int numerovoti;
            scanf("%d", &numerovoti);
    
            int i[numerovoti];
            int b, somma = 0;
            float media;

        for (b = 0; b < numerovoti; b++) {
        printf("Inserisci un voto: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
        }

         media = (float)somma / numerovoti; 
         printf("La media dei voti che hai in latino è: %f \n", media);
         if (media<6){
            printf("\nSei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
         }
        else {
            printf("\nNon sei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
                }
            }
            if (strcmp(materiaselezionata, "5")==0 || (strcmp(materiaselezionata, "Greco"))==0 || (strcmp(materiaselezionata, "greco"))==0){
            printf("\nQuanti voti hai in greco? \n");
            int numerovoti;
            scanf("%d", &numerovoti);
    
            int i[numerovoti];
            int b, somma = 0;
            float media;

        for (b = 0; b < numerovoti; b++) {
        printf("Inserisci un voto: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
        }

         media = (float)somma / numerovoti; 
         printf("La media dei voti che hai in greco è: %f \n", media);
         if (media<6){
            printf("\nSei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
         }
        else {
            printf("\nNon sei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
                }
            }
            if (strcmp(materiaselezionata, "6")==0 || (strcmp(materiaselezionata, "Inglese"))==0 || (strcmp(materiaselezionata, "inglese"))==0){
            printf("\nQuanti voti hai in inglese? \n");
            int numerovoti;
            scanf("%d", &numerovoti);
    
            int i[numerovoti];
            int b, somma = 0;
            float media;

        for (b = 0; b < numerovoti; b++) {
        printf("Inserisci un voto: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
        }

         media = (float)somma / numerovoti; 
         printf("La media dei voti che hai in inglese è: %f \n", media);
         if (media<6){
            printf("\nSei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
         }
        else {
            printf("\nNon sei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
                }
            }
            if (strcmp(materiaselezionata, "7")==0 || (strcmp(materiaselezionata, "Storia"))==0 || (strcmp(materiaselezionata, "storia"))==0){
            printf("\nQuanti voti hai in storia? \n");
            int numerovoti;
            scanf("%d", &numerovoti);
    
            int i[numerovoti];
            int b, somma = 0;
            float media;

        for (b = 0; b < numerovoti; b++) {
        printf("Inserisci un voto: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
        }

         media = (float)somma / numerovoti; 
         printf("La media dei voti che hai in storia è: %f \n", media);
         if (media<6){
            printf("\nSei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
         }
        else {
            printf("\nNon sei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
                }
            }
            if (strcmp(materiaselezionata, "8")==0 || (strcmp(materiaselezionata, "Filosofia"))==0 || (strcmp(materiaselezionata, "filosofia"))==0){
            printf("\nQuanti voti hai in filosofia? \n");
            int numerovoti;
            scanf("%d", &numerovoti);
    
            int i[numerovoti];
            int b, somma = 0;
            float media;

        for (b = 0; b < numerovoti; b++) {
        printf("Inserisci un voto: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
        }

         media = (float)somma / numerovoti; 
         printf("La media dei voti che hai in filosofia è: %f \n", media);
         if (media<6){
            printf("\nSei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
         }
        else {
            printf("\nNon sei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
                }
            }
            if (strcmp(materiaselezionata, "9")==0 || (strcmp(materiaselezionata, "Scienze"))==0 || (strcmp(materiaselezionata, "scienze"))==0){
            printf("\nQuanti voti hai in scienze? \n");
            int numerovoti;
            scanf("%d", &numerovoti);
    
            int i[numerovoti];
            int b, somma = 0;
            float media;

        for (b = 0; b < numerovoti; b++) {
        printf("Inserisci un voto: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
        }

         media = (float)somma / numerovoti; 
         printf("La media dei voti che hai in scienze è: %f \n", media);
         if (media<6){
            printf("\nSei a rischio debito!\n");
            sleep (1);
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
         }
        else {
            printf("\nNon sei a rischio debito!\n");
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
                }
            }
         if (strcmp(materiaselezionata, "10")==0 || (strcmp(materiaselezionata, "Scienze motorie"))==0 || (strcmp(materiaselezionata, "scienze motorie"))==0){
            printf("\nQuanti voti hai in scienze motorie? \n");
            int numerovoti;
            scanf("%d", &numerovoti);
    
            int i[numerovoti];
            int b, somma = 0;
            float media;

        for (b = 0; b < numerovoti; b++) {
        printf("Inserisci un voto: \n");
        scanf("%d", &i[b]);
        somma = somma + i[b];
        }

         media = (float)somma / numerovoti; 
         printf("La media dei voti che hai in scienze motorie è: %f \n", media);
         if (media<6){
            printf("\nSei a rischio debito!\n");
            sleep(1);
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
         }
            else {
            printf("\nNon sei a rischio debito!\n");
            sleep(1);
            printf ("\nVuoi tornare alla pagine precedente?\n");
            char ritornopaginaprecedente [80];
            scanf("%s", ritornopaginaprecedente);
                if (strcmp(ritornopaginaprecedente, "Si")==0 || (strcmp(ritornopaginaprecedente, "si")==0)){
                    goto selezionemateria; 
                }
                else {
                    return (0);
                }
            }
                }
            }
        }
        return(0);
    }
    
        }
    }
    
}
