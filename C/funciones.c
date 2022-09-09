#include <stdio.h>

int suma(int xx, int yy, int zz);

void main(){
   /* int x, y, z, contador;
    int resultado, retornoFun;
    for(contador = 0; contador < 4; contador++){
        printf("MAIN(%d) -> Ingresa 3 valores numericos: \n",contador);
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        if ((x > y) || (x > z)){
            retornoFun = suma(x, y, z);
        }
        else{
            printf("ERROR: Ingrese el primer valor con mayor valor numerico\n");
        }
        
        printf("MAIN -> x: %d, y:%d, z:%d, resultado:%d \n",x, y, z, resultado);
        printf("MAIN-> Retorno: %d\n",retornoFun);
    }
   */
    int opcion;
    opcion = suma(4, 5, 6);
    while(opcion != 5 && opcion <5){
        printf(" ---------- MENU ------------ \n");
        printf("1) Funcion 1\n");
        printf("2) Funcion 2\n");
        printf("3) Funcion 3\n");
        printf("4) Funcion 4\n");
        printf("5) SALIR\n");
    
        scanf("%d",&opcion);
        switch (opcion)
        {
        case 1:
            printf("FUNCION1 \n");
            break;
        case 2:
            printf("FUNCION2 \n");
            break;
        case 3:
            printf("FUNCION3 \n");
            break;
        case 4:
            printf("FUNCION4 \n");
            break;
        case 5:
            printf("SALIR \n");
            break;
        default:
            printf("ERROR AL INGRESAR UNA OPCION \n");
            break;
        }
    }
    
}

int suma(int xx, int yy, int zz){
    //int x, y , z; 
    int resultado;
    resultado = xx + 2*yy + 3*zz;
    printf("SUMA-> x: %d, y:%d, z:%d, resultado:%d \n",xx, yy, zz, resultado);
    return resultado;
}