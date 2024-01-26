#include "./startup.h"

    ////    //     /////////     ///     ///     //      //     ///////////
   // //   //     //              //  //        //      //     ///   
  //  //  //     ///////           //          //      //        ////
 //   // //     //               // //        //      //            ///
//    ////     //////////     ///    ///     //////////     ///////////         All rights reserved. 

/*1. Finire le scelte e inserire le aziende con approfondimento ulteriore
  2. Implementare la funzione di ritorno alla home in qualsiasi punto del programma e spostare questa dichiarazione dall'inizio al print della schermata home
  3. Capire perché non funziona la verifica dello username e password
  4. Implementare il bilancio legato all'utente che riprendendo dalla funzione che genera profitto aggiunge soldi al bilancio dell'utente
  5. Ricontrollo generale del corretto funzionamento del codice
  6. Aggiungere tutti gli sleep per rendere più bello il programma 
  7. Risolvere il problema alla riga 44
  8. Ritorno alla pagina di pro*/

int len; 
char car[] = "0123456789abcdefghijklmnoqprstuvwyzxABCDEFGHIJKLMNOQPRSTUYWVZX!#$&?";

char *genera_password(int size){
    int car_dim = sizeof(car)/sizeof(car[0]) -1;
    char    *pinCode;
    int i;

    srand(time(NULL));
    pinCode = malloc(sizeof(char) * 10 + 1);
    i = 0;
   while (i < size)
    {
        pinCode[i] = car[rand() % (car_dim)];
        i++;
    }
    pinCode[i] = '\0';
    printf("Il tuo pinCode è: %s\n", pinCode);
    return (pinCode);
}

void logincomplete();

void generaguadagno(int numeroinvestimenti) 
{ 
    if (numeroinvestimenti == 0){
        printf("Il guadagno totale geneato dai tuoi investimenti ammonta a: 0 €"); 
        //goto home;
    }
    else {
    int lower = 50; 
    int upper = 250;
    int count = 1;
    
    int i = 0; 
    for (i = 0; i < count; i++) { 
        int num = (rand() % 
        (upper - lower + 1)) + lower; 
        printf("Il guadagno totale geneato dai tuoi investimenti ammonta a: %d €", num); 
        } 
    } 

}

void    registrazione(t_user *user, int *accreg)
{
    char username[20];
    char password[20];

    sleep (1);
    printf("\nBenvenuto nella pagina di registrazione alla piattaforma. Per creare un account inserisci.\n");
    sleep (1);
    printf("\nUsername: ");
    scanf(" %s", &username);
    user->username = username;
    printf("%s\n", username);
    printf("Password: ");
    scanf(" %s", &password);
    printf("%s\n", password);
    user->password = password;
    printf("\nStiamo generando il tuo codice personale che dovrai utilizzare per accedere al tuo bilancio.\nQuesto codice è unico e non va condiviso per garantire la massima sicurezza del servizio.");
    sleep (1);
    printf("\n\nCodice generato: ");
    user->pinCode = genera_password(10);
    printf("Ti ringraziamo per aver scelto Nexus.");
    *accreg = 2;
}


void logincomplete(){
    int numeroinvestimenti;
//float bilancio;
home:
sleep(1);
printf("\n\nLa nostra start-up offre diverse possibilità di investimento sicuro.\nSeleziona la somma che sei disposto a collorare: ") ;
sleep (1);
printf("\n1. 50 - 100 €\n2. 101 - 500 €\n3. 501 - 1000 €\n4. 1001 - 2000 €\n5. 2001 - 5000 €\n6. Controllare il guadagno totale di tutti gli investimenti\n\n");
int scelta;
scanf ("%d", &scelta);
/*printf("\nQual è la somma esatta che vuoi collocare?\n");
user->bilancio = bilancio;
scanf("%s", bilancio);*/


if (scelta == 1){
    possibilinvestimenti:
    sleep(1);
    printf("\nEcco le possibilità di investimento create su misura per te.\nPremi il numero corrispondente all'azienda per ottenere più informazioni\n");
    printf("1. Salute al passo\n2. EcoMobility\n3. GreenGrown\n4. ReMind\n\n");
    int sceltaimpresa;
    scanf("%d", &sceltaimpresa);
        if (sceltaimpresa == 1){
            printf("\n\nSalute al passo\nSettore: Fitness e Benessere\nPiattaforma di fitness online che offre programmi personalizzati e monitoraggio della salute per aiutare le persone a raggiungere i loro obiettivi di fitness. \n");
            printf("\nPer continuare con l'operazione premere: 1\nPer visualizzare le altre proposte di investimento premere: 2\n\n");
            int confermacontinuare;
            scanf("%d", confermacontinuare);
            if (confermacontinuare == 1){
            printf("\nSei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");            
            int conferma; 
            scanf("%d", &conferma);
                    if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                    sleep (1);
                    ritornareallapaginainiziale:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
            }
            else if (confermacontinuare == 1){
                goto possibilinvestimenti;
            }
        }
        if (sceltaimpresa == 2){
            printf("\n\nEcoMobility\nSettore: Trasporti e Mobilità\nServizio di noleggio di veicoli elettrici a lungo termine, promuovendo la mobilità sostenibile nelle città.\n ");
            printf("\nPer continuare con l'operazione premere: 1\nPer visualizzare le altre proposte di investimento premere: 2\n\n");
            int confermacontinuare;
            scanf("%d", confermacontinuare);
            if (confermacontinuare == 1){
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                    sleep (1);
                    ritornareallapaginainiziale1:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale1;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
                }
                else if (confermacontinuare == 1){
                goto possibilinvestimenti;
            }
        }
        
        if (sceltaimpresa == 3){
            printf("\n\nGreenGrow\nSettore: Agricoltura e sostenibilità alimentare\nSistema automatizzato di coltivazione indoor per produrre ortaggi freschi e sostenibili direttamente in casa.\n ");
            int confermacontinuare;
            scanf("%d", confermacontinuare);
            if (confermacontinuare == 1){
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale2:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale2;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
        else if (confermacontinuare == 2){
            goto possibilinvestimenti;
        }
    }      
         if (sceltaimpresa == 4){
            printf("\n\nReMind\nSettore: Salute mentale e benessere\nApp di benessere mentale che offre strumenti di auto-aiuto, sessioni di meditazione guidata e supporto da parte di psicologi qualificati.\n ");
            int confermacontinuare;
            scanf("%d", confermacontinuare);
            if (confermacontinuare == 1){
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale3:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale3;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
            }
            else if (confermacontinuare == 2){
                goto possibilinvestimenti;
            }
        }
    }
        else if (scelta == 2){
    printf("\nEcco le possibilità di investimento create su misura per te.\nPremi il numero corrispondente all'azienda per ottenere più informazioni\n");
    printf("1. EduGames\n2. Safetech Guardian\n3. SustainableFashion\n4. CleanOcean Solutions");
    int sceltaimpresa;
    scanf("%d", &sceltaimpresa);
        if (sceltaimpresa == 1){
            printf("\n\nEduGames\nSettore: Tecnologia educativa\nPiattaforma di apprendimento gamificata che utilizza giochi interattivi per rendere divertente e coinvolgente l'apprendimento per studenti di tutte le età. \n");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale4:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale4;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
        if (sceltaimpresa == 2){
            printf("\n\nSafetechGuardian\nSettore: Sicurezza tecnologica\nSistema di sicurezza cibernetica avanzato per proteggere le piccole e medie imprese dalle minacce informatiche.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale5:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale5;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
        if (sceltaimpresa == 3){
            printf("\n\nSustainableFashion\nSettore: Moda sostenibile\nMarketplace online che vende abbigliamento e accessori realizzati con materiali sostenibili e processi produttivi eco-friendly.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale6:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale6;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
         if (sceltaimpresa == 4){
            printf("\n\nCleanOcean Solution\nSettore: Protezione ambientale\nTecnologia innovativa per la raccolta e il riciclo dei rifiuti plastici negli oceani, contribuendo alla pulizia degli ecosistemi marini.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale7:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale7;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
    }
       
    else if (scelta == 3){
    printf("\nEcco le possibilità di investimento create su misura per te.\nPremi il numero corrispondente all'azienda per ottenere più informazioni\n");
    printf("1. HealthTech Innovations\n2. SmartHome Solutions\n3. FinTech Express\n4. FoodTech Innovations");
    int sceltaimpresa;
    scanf("%d", &sceltaimpresa);
        if (sceltaimpresa == 1){
            printf("\n\nHealthTech Innovations\nSettore: Tecnologia sanitaria\nPiattaforma di telemedicina che consente ai pazienti di consultare i medici online e ricevere cure mediche senza dover lasciare casa. \n");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale8:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale8;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
        if (sceltaimpresa == 2){
            printf("\n\nSmartHome Solutions\nSettore: Domotica\nSistema integrato di automazione domestica che ottimizza l'efficienza energetica, la sicurezza e il comfort abitativo.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale9:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale9;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
        if (sceltaimpresa == 3){
            printf("\n\nFinTech Express\nSettore: Tecnologia finanziaria\nApplicazione mobile che semplifica e accelera il processo di apertura di conti bancari, investimenti e gestione finanziaria personale.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale11:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale11;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
         if (sceltaimpresa == 4){
            printf("\n\nFoodTech Innovations\nSettore: Tecnologia alimentare\nPiattaforma online che collega i produttori agricoli locali con i consumatori, facilitando la consegna di prodotti alimentari freschi e di qualità direttamente a casa.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale12:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale12;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
    }
     else if (scelta == 4){
    printf("\nEcco le possibilità di investimento create su misura per te.\nPremi il numero corrispondente all'azienda per ottenere più informazioni\n");
    printf("1. EnergyTech Solutions\n2. TravelTech Explorer\n3. EdTech Accademy\n4. VirtualReality Studios");
    int sceltaimpresa;
    scanf("%d", &sceltaimpresa);
        if (sceltaimpresa == 1){
            printf("\n\nEnergyTech Solutions\nSettore: Energia rinnovabile\nServizio di consulenza energetica che aiuta le aziende a ridurre i costi energetici e ad adottare soluzioni di energia rinnovabile. \n");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale13:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale13;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
        if (sceltaimpresa == 2){
            printf("\n\nTravelTech Explorer\nSettore: Tecnologia del viaggio\nApplicazione di viaggio che fornisce informazioni in tempo reale su destinazioni turistiche, offerte di voli e alloggi, e suggerimenti di viaggio personalizzati.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale14:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale14;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
        if (sceltaimpresa == 3){
            printf("\n\nEdTech Accademy\nSettore: Tecnologia educativa\nPiattaforma di formazione online che offre corsi accademici, professionali e di sviluppo personale per utenti di tutte le età e livelli di competenza.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale15:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale15;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
         if (sceltaimpresa == 4){
            printf("\n\nVirtualReality Studios\nSettore: Realtà virtuale e aumentata\nStudio di produzione di contenuti VR/AR che crea esperienze immersive per l'intrattenimento, l'istruzione e la formazione aziendale.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale16:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale16;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
    }
     else if (scelta == 5){
    printf("\nEcco le possibilità di investimento create su misura per te.\nPremi il numero corrispondente all'azienda per ottenere più informazioni\n");
    printf("1. ArtificialIntelligence Solutions\n2. LegalTech Innovations\n3. SpaceTech Explorers\n4. WellnessTech Solutions");
    int sceltaimpresa;
    scanf("%d", &sceltaimpresa);
        if (sceltaimpresa == 1){
            printf("\n\nArtificialIntelligence Solutions\nSettore: Intelligenza artificiale \nSocietà specializzata nello sviluppo di soluzioni AI personalizzate per migliorare l'automazione dei processi aziendali e ottimizzare le operazioni.\n");
            printf("Sei sicuro di voler investire in questa azienda?\n 1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale17:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale17;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
        if (sceltaimpresa == 2){
            printf("\n\nLegalTech Innovations\nSettore: Tecnologia legale\nPiattaforma online che fornisce servizi legali automatizzati, consentendo ai clienti di creare documenti legali personalizzati e di ottenere consulenza legale da professionisti.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n 1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale18:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale18;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
        if (sceltaimpresa == 3){
            printf("\n\nSpaceTech Explorers\nSettore: Tecnologia spaziale\nAzienda che sviluppa tecnologie innovative per l'esplorazione dello spazio, inclusi satelliti per il monitoraggio ambientale e sistemi di trasporto spaziale avanzati.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n 1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                }
        }
         if (sceltaimpresa == 4){
            printf("\n\nWellnessTech Solutions\nSettore: Tecnologia del benessere\nPiattaforma digitale che offre servizi e strumenti per il benessere fisico, mentale ed emotivo, promuovendo uno stile di vita sano e equilibrato.\n ");
            printf("Sei sicuro di voler investire in questa azienda?\n 1. Confermo\n2. Non confermo");
            int conferma; 
            scanf("%d", &conferma);
                if (conferma == 1){
                    printf("Congratulazioni per il tuo investimento.\nPuoi verificare il reddito generato dalla piattaforma selezionando l'opzione '6' nella pagina home.");
                    numeroinvestimenti++;
                sleep (1);
                    ritornareallapaginainiziale19:
                    printf("Vuoi tornare alla pagina iniziale?\n1. Si\n2. No");
                    int ritornopaginainiziale;
                    scanf("%d", ritornopaginainiziale);
                    if (ritornopaginainiziale == 1){
                        goto home;
                    }
                    else if (ritornopaginainiziale == 2){
                        return (0);
                    }
                    else {
                        goto ritornareallapaginainiziale19;
                    }

                }
                    else if (conferma == 2){
                        goto possibilinvestimenti; 
                    }
        }
    }
    else if (scelta == 6) {
        generaguadagno(numeroinvestimenti);
    }
}

void login (t_user *user){
    char username[20];
    char password[20];
    char *pinCode;

    login:
    printf("\n\nUsername: ");
    scanf(" %s", &username);
    printf("Password: ");
    scanf(" %s", &password);
    printf("UUUU-----%s--------%s---------UUUUUUU", username, password);


    int d = strcmp(username, user->username);
    printf("uuu %d", d);
    int f = strcmp(password, user->password);
    printf("uuu %d", f);
    if (strcmp(username, user->username) == 1 && (strcmp(password, user->password))== 1 ){
            printf("\n\nBenvenuto nel tuo spazio personale.\n");
            sleep (1);
            codicesicurezza:
            printf("Inserisci il codice di sicurezza per accedere alla pagina di investimenti: ");
            scanf(" %s", pinCode);
                if (strcmp(pinCode, user->pinCode) == 0){
                    logincomplete();
                }
                else {
                    printf("Il codide di sicurezza che hai inserito è errato\n");
                    goto codicesicurezza;
                }
    }
    else  {
        printf("Lo username o la password sono errati\n");
        goto login;
    }
}




int main (){
    t_data  *data;
    t_user  *user;
    int     accreg;

    data = malloc(sizeof(t_data));
    user = malloc(sizeof(t_user));
    sleep (1);
    printf("\nBenvenuti nella piattaforma digitale di Nexus Wealth Management. Tutti i diritti sono riservati.\n");
    sleep (2);
    printf("\nPer creare un nuovo profilo premere: 1\nPer accedere ad un profilo già esistente premere: 2\n\nPer tornare a questo punto in qualsiasi momento premi '+'\nPer tornare alla pagina precendente premi '.'\n\n");
    scanf(" %d", &accreg);
    registrazione:
    if (accreg == 1){
       registrazione(user, &accreg);
       goto registrazione;
    }
    if (accreg == 2){
        login(user);
        logincomplete(user);
    }

}

