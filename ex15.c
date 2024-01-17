#include <stdio.h>

void calcolaCubo(){
    int numero;
    int cubo;

    printf("inserisci un numero: \n");
    scanf("%d", &numero);
    cubo = numero * numero * numero;
    printf("Il cubo di %d è %d\n", numero, cubo);
}

int main (){
    int contatore=0;

    while(contatore<4){
        calcolaCubo();
        contatore++;
    }
    return 0;
}