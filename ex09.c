#include <stdio.h>

int main (){
    int a;
    int b;
    printf("inserisci primo numero: \n");
    scanf("%d", &a);
    printf("inserisci secondo numero: \n");
    scanf("%d", &b);
    if(a%b==0){
        printf("il primo numero è multiplo del secondo \n");
        }
    if(a%b!=0){
        printf("il primo numero non è multiplo del secondo \n");
       }
    return 0;
   }
