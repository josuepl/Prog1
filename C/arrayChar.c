#include <stdio.h>
int main(){
    char nombre[20];
    nombre[0]='J';
    nombre[1]='O';
    nombre[2]='S';
    nombre[3]='U';
    nombre[4]='E';
    printf("La cadena es: %s \n",nombre);
    printf("Ingresa tu nombre: ");
    scanf("%s",&nombre);
    printf("La cadena es: %s \n",nombre);
    fflush(stdin);
    printf("Ingresa tu nombre: ");
    scanf("%[^\n]",&nombre);
    printf("La cadena es: %s \n",nombre);
    int ix = 0;
    for(ix = 0; ix < 20; ix++){
        printf("|%c ",nombre[ix]);
    }
    return 0;
}