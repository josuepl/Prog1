#include <stdio.h>
int main(){
    char nombre[20];
    int nombreI[20];
    int ix = 0;
    nombre[0]='J';
    nombre[1]='O';
    nombre[2]='S';
    nombre[3]='U';
    nombre[4]='E';
    printf("La cadena es: %s \n",nombre);
    nombreI[0]=nombre[0];
    nombreI[1]=nombre[1];
    nombreI[2]=nombre[2];
    nombreI[3]=nombre[3];
    nombreI[4]=nombre[4];
    for(ix = 0; ix < 5; ix++)
        printf("|%d ",nombreI[ix]);
    printf("\n");   
    printf("Ingresa tu nombre: ");
    scanf("%s",&nombre);
    printf("La cadena es: %s \n",nombre);
    fflush(stdin);
    printf("Ingresa tu nombre: ");
    scanf("%[^\n]",&nombre);
    printf("La cadena es: %s \n",nombre);
    for(ix = 0; ix < 20; ix++){
        printf("|%c ",nombre[ix]);
    }
    return 0;
}