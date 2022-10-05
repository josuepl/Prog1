#include <stdio.h>
void imprimeVec(int cal[10]);
void maxMin(int cal[10], int vals[2], int posI, int posF);
void sustituye(int cal[10], int vals[2], int posI, int posF);
void ordena(int cal[10], int val[2]);

int main(){
    int ix, min, max;
    int cal[10];
    int vals[2];
    for(ix = 0; ix < 10; ix++){
        printf("Ingrese la calificacion: ");
        scanf("%d",&cal[ix]);
    }
    imprimeVec(cal);
    ordena(cal, vals);
    imprimeVec(cal);
    printf("0->%d, 1->%d", vals[0],vals[1]);
    return 0;
}

void imprimeVec(int cal[10]){
    int ix= 0;
    for(ix = 0; ix< 10; ix++){
        printf("  |%d",cal[ix]);
    }
    printf("\n");
}
void maxMin(int cal[10], int vals[2], int posI, int posF){
    int ix= 0, max, min;
    max = min = cal[0];
    for(ix = posI; ix<= posF; ix++){
        if(cal[ix] > max) 
            max = cal[ix];
        if(cal[ix] < min)
            min = cal[ix];
    }
    printf("El valor max: %d - el valor min:%d\n",max, min);
    vals[0] = min;
    vals[1] = max;
}

void sustituye(int cal[10], int vals[2], int posI, int posF){
    int posMin, posMax, ix;
    for(ix = posI; ix <=posF; ix++){
        if(cal[ix]== vals[0])
            posMin = ix;
        if(cal[ix] == vals[1])
            posMax = ix;
    }
    cal[posMax] = cal[posF];
    cal[posMin] = cal[posI];
    cal[posI] = vals[0];
    cal[posF] = vals[1];
    printf("posI:%d, posF:%d \n",posI, posF);
}
void ordena(int cal[10], int val[2]){
    int iteraciones = 10/2, posI = 0, posF =9;
    int ix;
    for(ix = 0; ix < iteraciones; ix ++){
        maxMin(cal, val, posI, posF);
        sustituye(cal, val, posI, posF);
        posI++;
        posF--;
        imprimeVec(cal);
      
    }

}