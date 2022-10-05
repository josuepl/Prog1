#include<stdio.h>
void imprime(float estaturas[20]);
float *llena1(float estaturas[20]);
void llena2(float estaturas[20]);
void llena3(float estFun[20]);
int main(){
    float estaturas[20];
    float *est2;
    /*estaturas[0] = 1.70;
    estaturas[1] = 1.71;
    estaturas[2] = 1.72;
    estaturas[3] = 1.73;
    estaturas[4] = 1.74;
    estaturas[5] = 1.75;
    estaturas[6] = 1.76;
    estaturas[7] = 1.77;
    estaturas[8] = 1.78;
    estaturas[9] = 1.79;
    estaturas[10] = 1.80;
    estaturas[11] = 1.81;
    estaturas[12] = 1.82;
    estaturas[13] = 1.83;
    estaturas[14] = 1.84;
    estaturas[15] = 1.85;
    estaturas[16] = 1.86;
    estaturas[17] = 1.87;
    estaturas[18] = 1.88;
    estaturas[19] = 1.89;*/
    int index = 0;
    for(index = 0; index<= 20; index++){
        printf("Ingresa un valor en la posicion: %d -> ", index);
        //scanf("%f",&estaturas[index]);
    }
    imprime(estaturas);
    est2 = llena1(estaturas);
    imprime(est2);
    est2[5]= 1000;
    printf("est[5]: %.2f, estaturas[5]: %.2f\n",est2[5],estaturas[5]);
    llena2(estaturas);
    imprime(estaturas);
    llena3(estaturas);
    imprime(estaturas);
    return 0;
}
void imprime(float estaturas[20]){
    int index = 0;
    printf("INDICE|");
    for(index = 0; index < 20; index++)
        printf(" %d  |", index);
    printf("\n");
    printf(" VALOR|");
    for(index = 0; index < 20; index++){
        printf("%.2f|",estaturas[index]);
    }
    printf("\n");
}
float *llena1(float estaturas[20]){
    int cont;
    printf("Ingresa la cantidad de estaturas que quieres ingresar: ");
    scanf("%d",&cont);
    int index = 0;
    for(index = 0; index < cont; index++){
        printf("Ingresa un valor en la posicion: %d -> ", index);
        scanf("%f",&estaturas[index]);
    }
    return estaturas;
}

void llena2(float estFun[20]){
    int cont;
    printf("Ingresa la cantidad de estaturas que quieres ingresar: ");
    scanf("%d",&cont);
    int index = 0;
    for(index = 0; index < cont; index++){
        printf("Ingresa un valor en la posicion: %d -> ", index);
        scanf("%f",&estFun[index]);
    }
}

void llena3(float estFun[20]){
    int resp, index;
    do{
        printf("Ingresa la posicion en la cual quieres guardar una estatura: ");
        scanf("%d",&index);
        printf("Ingresa un valor en la posicion: %d -> ", index);
        scanf("%f",&estFun[index]);
        printf("Si deseas ingresar otro valor selecciona 1 en otro caso 0: ");
        scanf("%d", &resp);
    }while(resp== 1);
}

