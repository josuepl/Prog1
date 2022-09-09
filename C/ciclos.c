#include <stdio.h>
int main(){
    //declaracion de variables
    int numeroSuerte, numeroUsr;
    numeroSuerte = 16;
    printf(" Programa que permite ingresar numeros hasta que se adivine el numero de la suerte \n");
    printf("El numero de la suerte esta dentro del rango 0 al 20\n");
    //printf("Ingresa un numero: ");
    //scanf("%d",&numeroUsr);
    while(numeroSuerte != numeroUsr){
        printf("Felicidades no has ganado, intenta nuevamente\n");
        printf("ingresa nuevamente otro valor: ");
        scanf("%d",&numeroUsr);
    }
    printf(" ====> HAS GANADO <===== %d\n",numeroUsr);
    do{
        printf("Ingresa un numero: ");
        scanf("%d",&numeroUsr);
    }while(numeroSuerte != numeroUsr);
    printf(" ====> HAS GANADO <===== %d\n",numeroUsr);
    return 0;
}