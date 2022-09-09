#include <stdio.h>
int main(){
    int incrementalA = 0, incrementalB = 0;
    while(incrementalA < 10){
        //printf("incrementalA: %d \n", incrementalA);
        incrementalA+=1;
    }
    do{
        //printf("incrementalB: %d \n", incrementalB);
        incrementalB+=1;
    }while(incrementalB < 10);

    //printf("IncA: %d, Incb: %d \n", incrementalA, incrementalB);
    
    // ciclos y series for
    int indice, index;
    for(indice = 0; indice <= 2; indice+=1){
        for(index = 0; index <= 2; index+=1){
            printf("(Indice,Index): (%d,%d) \n", indice,index);
        }
        //printf("(Indice,Index): (%d,%d) \n", indice,index);
    }
    return 0;
}