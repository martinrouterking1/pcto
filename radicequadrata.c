#include <stdio.h>

int main (){
    float i = 121;
    float xi = 4;
    float media = (xi+i/xi)/2;
    if (media==xi){
        printf("La radice quadrata è: %f", media);
    }
    else {
       float x2 = media;
        while(media!=xi){
            float media1 = (x2+i/xi)/2;
             x2 = media1;
             printf("%f\n", media1);
             media = media1;
        }   
        
        return(0);
    }
}