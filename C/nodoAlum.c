#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct structAlumno
{
    char nombre[10];
};

int main(){
    struct structAlumno *nuevoAl;
    int opc;
    do{
        printf("Deseas agregar un alumno: 1-> SI, 2 ->NO\n");
        scanf("%d",&opc);
        if(opc == 1){// crear un alumno
            nuevoAl = (struct structAlumno*)malloc(sizeof(struct structAlumno));
            printf("Ingresa el nombre del alumno:");
            scanf("%s",&nuevoAl->nombre);
            printf("Nombre del alumno: %s\n",nuevoAl->nombre);
            free(nuevoAl);
        }
        else{// no se crea el alumno y se libera la ram
            free(nuevoAl);
            printf("Nombre del alumno: %s\n",nuevoAl->nombre);
        }

    }while(opc!= 2);


    return 0;
}