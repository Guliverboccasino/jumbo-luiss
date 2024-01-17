#include <stdio.h>

int main(){   
    int a;
    int i=2;

    printf("Inserisci un numero: \n");
    scanf("%d", &a);
    while(a%i!=0){
        main();
        i++;
        printf("non è numero primo \n");
    }
    if(a==i){
        printf("è numero primo \n");
    }
    if(a==1){
        printf("non è numero primo \n");
    else()
    }



    return 0;
}

