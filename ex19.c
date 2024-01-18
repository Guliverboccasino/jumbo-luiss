#include <stdio.h>

float potenza(float b){
    potenza=b*b;
    return potenza;
}

float moltiplicazione(float a, float c){
    moltiplicazione=4*a*c
    return moltiplicazione;
}

float sqrt(float potenza, float moltiplicazione){
    float temp, sqrt;
    sqrt = potenza - moltiplicazione / 2;
    temp = 0;

    while(sqrt != temp){
        temp = sqrt;
        sqrt = (potenza - moltiplicazione /temp + temp) / 2;
    }
    return sqrt;
}

int main(){
    float a;
    float b;
    float c;
    float potenza;
    float moltiplicazione;
    float x1;
    float x2;

    printf("inserisci a \n");
    scanf("%f", &a);
    printf("inserisci b \n");
    scanf("%f", &b);
    printf("inserisci c \n");
    scanf("%f", &c);
    potenza(b*b);
    moltiplicazione(4*a*c);
    sqrt(potenza-moltiplicazione);
   
    if(potenza-moltiplicazione>0){
        x1=(-b+sqrt(potenza, moltiplicazione))/2*a;
        x2=(-b-sqrt(potenza, moltiplicazione))/2*a;
        printf("%f \n", x1);
        printf("%f \n", x2);
    }
    if(potenza-moltiplicazione=0){
        x1=-b/2*a;
        x2=-b/2*a;
        printf("%f \n", x1);
        printf("%f \n", x2);
    }
    if(potenza-moltiplicazione<0){
        printf("L'equazione non ammette soluzioni reali \n");
    }
    return 0;
}


