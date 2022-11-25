#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct structAlumno
{
    char nombre[10];
    struct structAlumno *apuntadorAl;
    
};
typedef struct structAlumno structAlumno;


int main(){
    structAlumno *listAl;
    structAlumno *alAux;
    int opc;
    listAl = NULL;
    do{
        structAlumno *nuevoAl;
        int cont = 0;
        printf("Deseas agregar un alumno: 1-> SI, 2 ->NO:   ");
        scanf("%d",&opc);
        if(opc == 1){// crear un alumno      
            nuevoAl = (structAlumno*)malloc(sizeof(structAlumno));
            printf("Ingresa el nombre del alumno:");
            scanf("%s",&nuevoAl->nombre);
            printf("Nombre del alumno: %s\n",nuevoAl->nombre);
            nuevoAl->apuntadorAl=NULL;
            if(listAl == NULL){
                listAl = nuevoAl;
            }
            else{
                alAux = listAl;
                while (alAux->apuntadorAl!=NULL)
                {
                    printf("Entra while %d\n",cont);
                    cont++;
                    alAux = alAux->apuntadorAl;
                }
                alAux->apuntadorAl = nuevoAl;
            }
        }
        else{
            //free(nuevoAl);
            //printf("Nombre del alumno: %s\n",nuevoAl->nombre);
            alAux = listAl;
            while (alAux!=NULL)
            {
                printf("Alumno: %s \n",alAux->nombre);
                alAux= alAux->apuntadorAl;

            }
        }

    }while(opc!= 2);


    return 0;
}