#include <stdio.h>

int main () {
  printf("Inserisci la temperatura in Celsius: \n");
  float temp;
  scanf("%d", &temp);
  float tempk = (temp) + 273.15;
  float tempf = (temp)*(5/9)+32;
  
    if(temp<-273.15){
        printf("Errore\n");
    }
    else {
    printf("La temperatura in Kelvin è: %f gradi\n", tempk);
    printf("La temperatura in Farenheit è: %f gradi\n", tempf);
    }
}