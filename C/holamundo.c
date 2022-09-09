#include <stdio.h>

int main(){
    //declaración
    int variableX, variableY;
    int rSuma, rResta,RMul, RDiv;
    // asignacion
    variableX = 10;
    variableY = 5;
    printf("El siguiente programa recibe el valor de dos variables de tipo entero, una vez ingresado los datos se realizaran operaciones aritmeticas y se mostrara el resultado \n");
    do{
        printf("Ingresa el valor de vX: ");
        scanf("%d",&variableX);
        printf("Ingresa el valor de vY: ");
        scanf("%d",&variableY);

        if(variableX > variableY){
            rSuma = variableX + variableY;
            RMul = variableX * variableY;
            printf("El resultado de la suma de vX: %d, vY:%d = %d \n",variableX, variableY, rSuma);
            printf("El resultado de la multiplicacion de vX: %d, vY:%d = %d \n",variableX, variableY, RMul);
        }
        else if(variableX < variableY){
            rResta = variableX - variableY;
            RDiv = variableX / variableY;
            printf("El resultado de la resta de vX: %d, vY:%d = %d \n",variableX, variableY, rResta);
            printf("El resultado de la division de vX: %d, vY:%d = %d \n",variableX, variableY, RDiv);
        }
        else{
            printf("--------------- =>No se puede realizar alguna operacion ya que los valores son iguales ------\n");
        }
    
    
    }while(variableX == variableY);
    

}

