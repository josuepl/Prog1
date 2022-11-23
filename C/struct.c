#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct structAlumno
{
    char nombre[20];
    int edad;
    float creditos;
    int matricula;
    char genero[20];
};

int main(){
    int ix = 0;
    struct structAlumno josue;
    strcpy(josue.nombre,"JOSUE");
    josue.edad = 10;
    josue.creditos = 145.5;
    strcpy(josue.genero,"Masculino");
    josue.matricula = 202212345;
    printf("%s, \n",josue.nombre);
    struct structAlumno alumnos[5];
    for(ix = 0; ix < 5; ix++){
        printf("Ingresa el nombre del alumno: ");
        scanf("%s",&alumnos[ix].nombre);
        printf("Ingresa el genero del alumno: ");
        scanf("%s",&alumnos[ix].genero);
        printf("Ingresa la edad del alumno: ");
        scanf("%d",&alumnos[ix].edad);
        printf("Ingresa los creditos del alumno: ");
        scanf("%f",&alumnos[ix].creditos);
        printf("Ingresa la matricula del alumno: ");
        scanf("%d",&alumnos[ix].matricula);

        //printf("%s - \n",alumnos[ix].nombre);    
    }
    printf("Los alumnos almacenados son: \n");
    for(ix = 0; ix < 5; ix++){
        printf("Nombre: %s Genero: %s Edad: %d Creditos:%f Matricula:%d \n", alumnos[ix].nombre, alumnos[ix].genero, alumnos[ix].edad, alumnos[ix].creditos,alumnos[ix].matricula); 
        //printf("%d",ix);
    }
    return 0;
}
