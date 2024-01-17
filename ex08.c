#include <stdio.h>

int main (){
    int m;
    int n;
    printf("inserisci a quanti anni si può prendere la patente nel tuo paese: \n");
    scanf("%d", &m);
    printf("quanti anni hai: \n");
    scanf("%d", &n);
    if(n<m){
        printf("non puoi prendere la patente \n");
        }
    if(n>m){
        printf("puoi prendere la patente \n");
       }
        return 0;
   }    
