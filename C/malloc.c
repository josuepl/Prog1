#include <stdlib.h>
#include <stdio.h>

int main(){
    int *apuntador, ix = 0, tamInt, tamApun, tamTot;
    apuntador = (int*)malloc(10*sizeof(int));
    for(ix = 0; ix < 10; ix++)
        apuntador[ix]=ix;
    //printf("|");
    for(ix = 0; ix < 10; ix++)
        printf("| %d ",apuntador[ix]=ix);
    printf("|\n");
    tamInt = sizeof(tamInt);
    tamApun = sizeof(apuntador);
    tamTot = tamInt * tamApun;
    printf("Tam int:%d, Tam apuntador:%d, Tam total:%d \n", tamInt, tamApun, tamTot);
    return 0;
}