#include <stdlib.h>
#include <stdio.h>

int main(){
    int *apuntador, ix = 0, tamInt, tamApun, tamTot;
    int totCal;
    printf("Ingrese la cantidad de calificaciones a promediar: ");
    scanf("%d",&totCal);
    apuntador = (int*)malloc(totCal*sizeof(int));
    for(ix = 0; ix < totCal; ix++){
        printf("Ingresa la calificacion en el indice %d:",ix);
        scanf("%d",&apuntador[ix]);
    
    }
        
    //printf("|");
    for(ix = 0; ix < totCal; ix++)
        printf("| %d ",apuntador[ix]);
    printf("|\n");
    tamInt = sizeof(tamInt);
    tamApun = sizeof(apuntador);
    tamTot = tamInt * tamApun;
    printf("Tam int:%d, Tam apuntador:%d, Tam total:%d \n", tamInt, tamApun, tamTot);
    return 0;
}