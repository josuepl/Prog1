#include<stdio.h>
int main(){
    int a[2];
    int b[2][2];
    int c[2][2][2];
    int ix, iy, iz;
    // para agregar datos en los arrreglos se necesita la estructura de repeticion
    // Arreglo a
    for(ix = 0; ix < 2; ix++){
        printf("Ingresa un valor en la posicion ix[%d]",ix);
        scanf("%d",&a[ix]);
    }

    for(ix = 0; ix < 2; ix++)
        printf(" %d|",a[ix]);
    printf("\n");

    //arreglo b
    for(ix = 0; ix < 2; ix++)
        for(iy = 0; iy < 2; iy++){
            printf("Ingresa un valor en la posicion ix[%d]iy[%d]",ix,iy);
            scanf("%d",&b[ix][iy]);
        }
    for(ix = 0; ix < 2; ix++){
        for(iy = 0; iy < 2; iy++){
            printf("[%d][%d]= %d",ix,iy,b[ix][iy]);
        }
        printf("\n");
    }

    //arreglo c
    for(ix = 0; ix < 2; ix++)
        for(iy = 0; iy < 2; iy++)
            for(iz = 0; iz < 2; iz++){
                printf("Ingresa un valor en la posicion ix[%d]iy[%d]iz[%d]",ix,iy,iz);
                scanf("%d",&c[ix][iy][iz]);
            }
    for(ix = 0; ix < 2; ix++){
        for(iy = 0; iy < 2; iy++){
            for(iz = 0; iz < 2; iz++){
                printf("ix[%d]iy[%d]iz[%d]= %d",ix,iy,iz,c[ix][iy][iz]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}