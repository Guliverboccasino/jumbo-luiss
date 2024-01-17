#include <stdio.h>

int main (){
    int anno;
    printf("inserisci anno: \n");
    scanf("%d", &anno);
if(anno%4==0){
    else if(anno%100!=0)
    printf("é anno bisestile \n");
    }
if(anno%400==0){
    printf("anno bisestile \n");
    }
if(anno%4!=0){
    printf("non è anno bisestile \n");
   }
if(anno%100==0){
    printf("non è anno bisestiel \n");
    }
if(anno%400!=0){
    printf("non è anno bisestile \n");
    }
    return 0;
    }



