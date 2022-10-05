#include <stdio.h>
int main(){
    int ix, min, max;
    int cal[10];
    for(ix = 0; ix < 10; ix++){
        printf("Ingrese la calificacion: ");
        scanf("%d",&cal[ix]);
    }

    for(ix = 0; ix< 10; ix++){
        printf("  -%d",cal[ix]);
    }
    printf("\n");
    min = max = cal[0];
    for(ix =0; ix<10; ix++){
        if(cal[ix] > max){
            max = cal[ix];
        }
        if(cal[ix] < min){
            min = cal[ix];
        }
    }
    printf("El valor max: %d - el valor min:%d\n",max, min);
    return 0;
}