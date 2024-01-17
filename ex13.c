#include <stdio.h>

int main (){
    
    int a;

    printf("quando sei nato? \n");
    scanf("%d", &a);

    if(a>1969){
        printf("sei nato/a %d", a-1969);
        printf("anni dopo il primo passo dell'uomo sulla Luna \n");

    }
    else if(a<1969){
        printf("sei nato/a %d", 