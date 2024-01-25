#include "./startup.h"

    ////    //     /////////     ///     ///     //      //     ///////////
   // //   //     //              //  //        //      //     ///   
  //  //  //     ///////           //          //      //        ////
 //   // //     //               // //        //      //            ///
//    ////     //////////     ///    ///     //////////     ///////////         All rights reserved. 


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

void    registrazione(t_user *user, int *accreg)
{
    char username[20];
    char password[20];

    sleep (1);
    printf("\nBenvenuto nella pagina di registrazione alla piattaforma. Per creare un account inserisci\n");
    sleep (1);
    printf("\nUsername: ");
    scanf(" %s", &username);
    user->username = username;
    printf("\nPassword: ");
    scanf(" %s", &password);
    user->password = password;
    printf("\nStiamo generando il tuo codice personale che dovrai utilizzare per accedere al tuo bilancio.\nQuesto codice è unico e non va condiviso per garantire la massima sicurezza del servizio.");
    sleep (1);
    printf("\nCodice generato: ");
    user->pinCode = genera_password(10);
    printf("Ti ringraziamo per aver scelto Nexus");
    *accreg = 2;
}

void login (t_user *user){
    char username[20];
    char password[20];
    char *pinCode;

    login:
    printf("\nUsername: \n");
    scanf(" %s", username);
    printf("Password: \n");
    scanf(" %s", password);
    printf("asdasdasd---%s\n", user->username);
    if (strcmp(username, user->username) == 0 && strcmp(password, user->password)== 0 ){
            printf("Benvenuto nel tuo spazio personale.\n");
            sleep (1);
            printf("Inserisci il codice di sicurezza per accedere alla pagina di investimenti");
            scanf(" %s", &pinCode);
                if (strcmp(pinCode, user->pinCode) == 0){
               
                }
    }
    else  {
        printf("Lo username o la password sono errati\n");
        goto login;
    }
}

void logincomplete(){
    
printf("La nostra start-up offre diverse possibilità di investimento sicuro.\nSeleziona la somma che sei disposto a collorare: ") ;
printf("1. 50 - 100 €\n2. 101 - 500 €\n3. 501 - 1000 €\n4. 1001 - 2000 €\n5. 2001 - 5000 €");
int scelta;
scanf ("%d", scelta);
if (scelta == 1){
    printf("\nEcco le possibilità di investimento create su misura per te.\nPremi il numero corrispondente all'azienda per ottenere più informazioni\n");
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
        logincomplete();
    }

}

