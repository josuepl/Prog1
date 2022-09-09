#include <stdio.h>
void sumaRes(int *varX, int *varY);

int main(){
    int varX = 5, varY = 10;
    printf("Los valores son varX:%d, varY:%d \n",varX, varY);
    sumaRes(&varX, &varY);
    printf("Los valores son varX:%d, varY:%d \n",varX, varY);
    printf("Las direcciones son varX:%d, varY:%d \n",&varX, &varY);
}
void sumaRes(int *varX, int *varY){
    (*varX) = (*varY)*4;
    (*varY) = (*varX)*5;
    printf("FUN: Los valores son varX:%d, varY:%d \n",varX, varY);
    printf("FUN: Los contenidos son varX:%d, varY:%d \n",(*varX), (*varY));
    
}
