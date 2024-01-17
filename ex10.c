#include <stdio.h>

int main (){
    float c;
    float a;
    float K;
    float F;
    printf("inserisci temperatura in Celsius: \n");
    scanf("%f", &c);
    if(c<a){
     a= -273.15;
    printf("errore \n");
    }
   else if(c>=a){
    K= c + 273.15;
    F= 9/5 * (c + 32);
    printf("K %f, F %f", K,F);
    return 0;
    }
    }

